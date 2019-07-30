#include<bits/stdc++.h>
using namespace std;

int solve(int N, int a, int b)
{
	vector<int>v(N+1);
	int x = 0;
	int y = 0;
	int position = 0;
	int minsum = INT_MAX;
	int sum = 0;
	//for(int i = 0; i <= N; i++)

	for(int i = 1; i <= N; i++)
	{
		if( i == a || i == b)
		{
			continue;
		}
		else {
			x = abs(i-a);
			y = abs(i-b);
			sum = x+y;
			if( sum < minsum)
			{
				minsum = sum;
				position = i;
			}
			
		}
	}
	cout<<position<<" "<<minsum<<"\n";
	return 0;
}


int main()
{
	int t,N,a,b;
	cin>>t;
	while(t--)
	{
		cin>>N;
		cin>>a;
		cin>>b;
		solve(N,a,b);
	}
	return 0;
}
