#include<bits/stdc++.h>
using namespace std;
vector<int>prim;

///prime number upto 10000

void sieve(int n)
{
  int prime[n];
    memset(prime,0,sizeof(prime));
    prime[0]=prime[1]=1;
    for(int i=4;i<=n;i+=2)
        prime[i]=1;
    for(int i=3;i*i<=n;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            prim.push_back(i);
        }
    }
}

int main()
{
  int x=10000;
  sieve(x);
  int test;
  cin>>test;
  while(test--)
  {
      int a;
      cin>>a;
      int k=0;
      for(int i=0;i<prim.size();i++)
      {
        if(prim.at(i)==a)
        {
            k=1;
        }
      }
     if(k==1)
     {
         cout<<"Yes"<<endl;
     }
     else
     {
         cout<<"No"<<endl;
     }
  }
 return 0;
}
