#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t,n;
	string s;
	string p;
	char x;
	int len = 0;
	int count = 0;
	cin>>t;
	while(t--)
	{
		count = 0;
		scanf("%d",&n);
		cin>>s;
		scanf("%d",&x);
		len = s.length();
		for(int i = 0; i < n; i++)
		{
			for(int j = 1; i+j <= n; j++)
			{
				p = s.substr(i,j);
				if(p.find(x) != string::npos) {
					//cout<<p<<"\n";
					count++;
				}
			}
		}
		cout<<count;
		//cout<<x;
		cout<<"\n";
		p.clear();
		s.clear();
	}
	return 0;
}
