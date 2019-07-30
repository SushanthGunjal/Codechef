#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,j;
	cin>>t;
	int b;
	while(t--)
	{
		int count = 0;
		cin>>n;
		vector<int> a;
		vector<int> d;
		for ( i = 0; i < n; i++)
		{
			cin>>b;
			a.push_back(b);
		}
		for ( i = 0; i < n; i++)
		{
			cin>>b;
			d.push_back(b);
		}

		/*for( i = 0 ; i < n ; i ++)
		{
			cout<<a[i]<<" ";
		}
		for( i = 0 ; i < n ; i ++)
		{
			cout<<d[i]<<" ";
		}*/


		if(d[0] > (a[1]+a[n-1]))
		{
			cout<<d[0]<<endl;
			count++;
		}
		if(d[n-1] > (a[n-2]+a[0]))
		{
			cout<<d[n-1]<<endl;
			count++;
		}
		for(i = 1; i < n-1; i++)
		{
			if(d[i] > (a[i-1]+a[i+1]))
			{
				cout<<d[i]<<endl;
				count++;
			}
		}
		if(count == 0 )
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}

