#include<bits/stdc++.h>
using namespace std;

string removeduplicate(string str, int n)
{
	set <char> s (str.begin(),str.end());
	int i = 0;

	for(auto x: s)
		str[i++] = x;
	for(i = s.size();i<n;i++)
	{
		str[i] = '\0';
	}

	return str;
}

int main()
{
	int t,n,i;
	scanf("%d",&t);
	string s;
	while(t--)
	{
		string answer;
		int k = 0;
		vector <string> original;
		vector <string> sorted;
		scanf("%d ",&n);
		for ( i = 0 ; i < n ; i++ )
		{
			getline(cin,s);
			original.push_back(s);

		}
		sorted = original;
		for ( i =0; i < n; i++)
		{
			sort(sorted[i].begin(),sorted[i].end());
		}
		for( i = 0; i< n ; i++)
		{
			sorted[i] = removeduplicate(sorted[i],sorted[i].size());
		}
		/*for ( i =0; i < n; i++)
		{
			cout<<sorted[i]<<"\n";
		}*/
		for(i=0;  sorted[0][i] != '\0' ;i++)
		{
			int count = 1;
			for(int j = 1 ; j < n ; j++)
			{
				if ( ( sorted[j].find(sorted[0][i])) != string :: npos)
					count++;
			}
			if(count == n)
			{
				answer.push_back(sorted[0][i]);
			}

		}
		//cout<<answer;
		int b = answer.size();
		cout<<b<<endl;
	}
	return 0;
}




