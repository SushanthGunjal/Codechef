#include<bits/stdc++.h>
using namespace std;

#define ll long long

int solve(ll k) {
	int ans = 0;
	ll n = pow(10,k);
	//cout<<n;
	for(ll i = 0; i < n ; i++) {
		ll num = i;
		ll rev = ( pow(10,k) - i - 1);
		string numa = to_string(num);
		string reva = to_string(rev);
		vector<int>a(10,0);
		int count = 0;
		for(int j = 0; j < numa.size(); j++) {
			if(a[numa[j] - '0'] == 0) {
				count++;
				a[(numa[j] - '0')]++;
			}
		}
		for(int j = 0; j < reva.size(); j++) {
			if(a[reva[j] - '0'] == 0) {
				count++;
				a[(reva[j] - '0')]++;
			}
		}
		if(count == 2) {
			ans++;
		}
	}
	cout<<ans;



}


int main()
{
	ll t,k;
	cin>>t;
	while(t--) {
		cin>>k;
		solve(k);
		cout<<"\n";
	}

}
