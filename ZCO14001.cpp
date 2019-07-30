#include<bits/stdc++.h>
using namespace std;

int solve(int n, int h, vector<int> v,vector<int> w)
{
	int position = 0;
	bool crane = false;
	for(auto it = w.begin(); it != w.end(); it++)
	{
		if( *it == 1) {
			if(position > 0) {
				position--;
			}
		}
		else if(*it == 2) {
			if (position < (n-1)) {
				position++;
			}
		}
		else if( *it == 3 && v[position] > 0  ) {
			if (!crane) {
				crane = true;
				v[position]--;
			}
		}
		else if( *it == 4 && v[position] < h ) {
			if(crane) {
				crane = false;
				v[position]++;
			}
		}
		else if( *it == 0 )
		{

		}
	}
	for(auto it = v.begin(); it !=  v.end(); it++)
		cout<<*it<<" ";
	cout<<"\n";
	return 0;
}

int main()
{
	int n, h;
	int a;
	int b;
	cin>>n;
	cin>>h;
	vector<int> v(n);
	for(int i = 0; i < n ; i++)
	{
		cin>>v[i];
	}
	vector<int> w;
	do {
		cin>>b;
		w.push_back(b);
	} while( b != 0);
	/*for( auto it = w.begin(); it != w.end(); it++)
		cout<<*it<<" ";*/
	solve(n,h,v,w);
	v.clear();
	return 0;
}

