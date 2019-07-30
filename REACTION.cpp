#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>v, int r, int c)
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			/*int count = 0;
			int right = j + 1;
			int left = j - 1;
			int up = i - 1;
			int down = i + 1;*/
			if( i == 0 && (j == 0 || j == c-1) )
			{
				if(v[i][j] > 1)
					return 0;
			}
			else if( i == r-1 && (j == 0 || j == c-1) )
			{
				if(v[i][j] > 1)
					return 0;
			}
			else if( i == 0 || i == r-1)
			{
				if(v[i][j] > 2)
					return 0;
			}
			else if( j == 0 || j == c-1)
			{
				if(v[i][j] > 2)
					return 0;
			}
			else if( v[i][j] > 3)
				return 0;
			/*if( right >= 0 && right < r) 
				count++;
			if( left >= 0 && left < r )
				count++;
			if( up >= 0 && up < c )
				count++;
			if( down >= 0 && down < c )
				count++;
			if( count > v[i][j])
				continue;
			else
				return 0;*/
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,c;
		int a;
		int b;
		cin>>r>>c;
		vector<vector<int>> v(r);
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				cin>>a;
				v[i].push_back(a);
			}
		}
		if(solve(v,r,c))
			cout<<"Stable";
		else {
			cout<<"Unstable";
		}
		cout<<"\n";
	}
	return 0;
}


