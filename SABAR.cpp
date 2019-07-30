#include<bits/stdc++.h>
using namespace std;

#define ll long long

int solve( ll a, ll b)
{
	ll c,d;
	ll max, min;
	if( a == b)
		max=min=a;
	if( a > b) {
		max = a;
		min = b;
	}
	else {
		max = b; 
		min = a;
	}
	c = (max + min) - 1;
	d = (max - min) + 1;
	cout<<c<<" ";
	cout<<d;



}

int main()
{
	ll t, a, b;
	cin>>t;
	while(t--) {
		cin>>a;
		cin>>b;
		solve(a,b);
		cout<<"\n";
	}
	return 0;
}


