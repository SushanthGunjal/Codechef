#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> v,int n)
{
	int diff = v[1] - v[0];
	vector<int> w(n);
	w[0] = v[0];
	for(int i = 1; i < n; i++)
	{
		 w[i] = w[i-1] + diff;
	}
	for(int i = 0; i < n; i++)
	{
		cout<<w[i]<<" ";
	}
	cout<<"\n";
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		//cout<<sizeof(int);
		solve(v,n);
	}
	return 0;
}
