#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,x;
       cin>>n>>x;
       int count=1;
       n-=2;
       while(n>0)
       {
           n-=x;
           count++;
       }
       cout<<count<<endl;
   }
   return 0;
}