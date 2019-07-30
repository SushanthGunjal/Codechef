#include<bits/stdc++.h>
using namespace std;

int check(vector<int> v)
{
	int sump = 0,sumn = 0;
	int c1 = 0 , c2 = 0;
	int min = 0, max = 0;
	int d1 = 0 , d2 = 0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]<0) {
			sumn += v[i];
			c2++;
		}
		else if(v[i]>0) {
			sump += v[i];
			c1++;
		}
	}
	int res = (abs(sumn) > sump) ? sumn : sump;
	if(res == sumn) {
		min = c2;
	}
	else {
		min = c1;
	}
	//cout<<min<<" ";
	if(min == c1) {
		for(int i = 0;i<v.size();i++)
		{
			if(v[i]>=0) 
				d1++;

		}
		cout<<d1;
	}
	else {
		for(int i = 0;i<v.size();i++)
		{
			if(v[i]<=0)
				d2++;
		}
		cout<<d2;
	}
	cout<<" ";
	cout<<min<<endl;
	return 0;
}




int main()
{
	int t,n,a;
	cin>>t;
	while(t--) {
		cin>>n;
		vector<int>v;
		for(int i = 0;i < n ;i++)
		{
			
			cin>>a;
			v.push_back(a);
		}
		/*vector<int>::iterator it;
		for(it=v.begin();it != v.end();it++)
		{
			cout<<*it<<endl;
		}*/
		check(v);
	}
	return 0;
}
