#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int test;
    cin>>test;
    while(test--)
    {
        cin>>s;
        int t=2018;
        for(int i=12;i<s.size();i++)
        {
           t++;
        }
        cout<<"Happy New Year-"<<t<<endl;
    }
    return 0;
}
