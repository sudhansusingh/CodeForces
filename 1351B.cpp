#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
    int a1,b1,a2,b2;
    cin>>a1>>b1;
    cin>>a2>>b2;
    if(a1==a2 && a1==b1+b2 || b1==a2 && a2==a1+b2 || a1==b2 && b2==b1+a2 || a1==a2 && a2==b1+b2 ||b1==b2 && b1==a1+a2)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    t--;
    }
    return 0;
    
}