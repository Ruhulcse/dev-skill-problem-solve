#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,ar[3],br[3],k=1;
    cin>>test;
    while(test--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<3;i++)
        {
            cin>>br[i];
        }
        int sw=0,sh=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(ar[i]>br[j])
                {
                   sw++;
                }
                else
                {
                    sh++;
                }
            }
        }
        if(sh==9)
        {
            cout<<"Case "<<k++<<":"<<" Shibli wins"<<endl;
        }
        else if(sw==9)
        {
            cout<<"Case "<<k++<<":"<<" Swapnil wins"<<endl;
        }
        else
        {
             cout<<"Case "<<k++<<":"<<" Both can win"<<endl;
        }
    }
    return 0;
}
