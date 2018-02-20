#include<bits/stdc++.h>
using namespace std;
int l;
char most(string s)
{
   int count[256]={0};
   int len=s.size();
   for(int i=0;i<len;i++)
   {
       count[s[i]]++;
   }
   int mx=-1;
   char result;
   for(int i=0;i<len;i++)
   {
       if(mx<count[s[i]])
       {
           mx=count[s[i]];
           result=s[i];
       }
   }
   l=mx;
}
int main()
{
  int test;
  cin>>test;
  while(test--)
  {
      string a;
      int b;
      cin>>a>>b;
      sort(a.begin(),a.end());
      most(a);
      cout<<a.size()-l<<endl;
  }
  return 0;
}
