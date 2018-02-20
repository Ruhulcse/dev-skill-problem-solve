#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long int first_value,last_value;
        int transection,check=0;
        cin>>first_value>>last_value;
        cin>>transection;
        while(transection--)
        {
            long int cost;
            string type;
            cin>>type>>cost;
            if(type=="out")
            {
                if(cost<=first_value)
                {
                    first_value=first_value-cost;
                }
            }
            if(type=="in")
            {
                first_value=first_value+cost;
            }
        }
        if(first_value==last_value)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
