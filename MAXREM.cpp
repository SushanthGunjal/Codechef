#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<limits.h>
using namespace std;

int main()
{
	int n;
	int max = 0;
	int max_remain = 0;
	int maximum = INT_MIN;
	set<int> s;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n ; i++)
	{
		cin>>v[i];
		s.insert(v[i]);
	}
	max = *max_element(v.begin(),v.end());
	/*cout<<max;
	//cout<<"\n";
	for(auto it = s.begin(); it != s.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";*/
	for(auto it = s.begin(); it != s.end(); it++) {
		max_remain = (*it) % max;
		//cout<<max_remain<<"\n";
		if( maximum < max_remain)
			maximum = max_remain;
	}
	cout<<maximum;
	s.clear();
	cout<<"\n";
	return 0;

}

