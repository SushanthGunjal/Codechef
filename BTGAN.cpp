#include<bits/stdc++.h>
using namespace std;

int solve(string s, int m,int maximumofstring,map<char,int> mp)
{
	long long sum = 0;
	for(int i = maximumofstring + 1; i <=m; i++)
	{
		long long total = 0;
		for(int j = 0; j < s.length(); j++)
		{
			if(s[j] - 'A' >= 0 && s[j] - 'A' <= 26)
			{
				total += (mp[s[j]] * pow(i,s.length()-j-1));
			}
			else {
				total += ( (s[j] - '0') * pow(i,s.length()-j-1) );
			}
		}
		//cout<<total<<"\n";
		sum += total;
	}
	if( sum % 2 == 0)
		cout<<"0";
	else
		cout<<"1";



}


int main()
{
	int t;
	string s;
	char max;
	int maximumofstring;
	int m;
	map<char,int> mp;
	char ch = 'A';
	for(int i = 10; i <= 35; i++)
	{
		mp[ch] = i;
		ch++;
	}
	cin>>t;
	/*for(auto it = mp.begin(); it!= mp.end(); it++)
		cout<<it->first<<" "<<it->second<<"\n";

	cout<<"\n";
	*/	
	while(t--)
	{
		cin>>s;
		cin>>m;
		max = *max_element(s.begin(),s.end());
		//cout<<max - 'A';
		if( max - 'A' >= 0 && max - 'A' <= 26)
			maximumofstring = mp[max];
		else 
			maximumofstring = max - '0';
		//cout<<maximumofstring;
		solve(s,m,maximumofstring,mp);
	}
	cout<<"\n";
	return 0;
}
