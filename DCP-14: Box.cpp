#include<bits/stdc++.h>
using namespace std;
int main()
{
   double a,b,c,r,res;
   int test;
   cin>>test;
   while(test--)
   {
    cin>>a>>b>>c;
    r=(a*a)+(b*b)+(c*c);
    res=sqrt(r);
    printf("%.2lf\n",res);
   }
    return 0;
}
