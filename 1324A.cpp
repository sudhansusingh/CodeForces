#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
    int n;
    cin>>n;
    int a[n],flag=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
   int m=*max_element(a,a+n);
   for(int i=0;i<n;i++)
       {
           if((m-a[i])%2!=0)
          { 
              cout<<"NO"<<"\n";
           flag=1;
           break;
           }
       }
    
    if(flag==0)
     cout<<"YES"<<"\n";
    
     t--;
    }
      return 0;
}