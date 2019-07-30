#include<bits/stdc++.h>
using namespace std;

int solve(float n, string s)
{
	float diff;
	float countp = 0;
	float counta = 0;
	float percent;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == 'P')
			countp++;
		else if( i > 1 && i < n - 2 && ( s[i-1] == 'P' || s[i-2] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P') )
			counta++;
	}
	//cout<<countp;
	//cout<<counta;
	diff = ceil(0.75*n);
	//cout<<diff;
	if(countp >= diff) {
		cout<<"0";
		return 0;
	}
	else if( counta >= (diff-countp) ) {
		int ans = diff - countp;
		cout<<ans;
		return 0;
	}
	else 
		cout<<"-1";
	return 0;
}

int main()
{
	float t,n;
	string s;
	cin>>t;
	while(t--) {
		cin>>n;
		//string s(n,'\0');
		cin>>s;
		solve(n,s);
		cout<<"\n";
	}
	return 0;
}
