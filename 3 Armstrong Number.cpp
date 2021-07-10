/*
Armstrong Number 
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    int sum=0,rem;
   while(n!=0)
   {
       rem=n%10;
       sum+=pow(rem,3);
       n/=10;
   }
   string ans= (sum==k)?"Armstrong":"Not an Armstrong";
    cout<<ans;
    return 0;
}