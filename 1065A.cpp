#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	long long int s,a,b,c;
	cin>>s>>a>>b>>c;
	long long int pair=s/(a*c);
	unsigned long long int ans=pair*a+b*pair;
	long long int left=s-(a*c*pair);
	ans+=(left/c);
	cout<<ans<<"\n";
    }
	return 0;
}