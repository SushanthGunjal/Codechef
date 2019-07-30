#include<bits/stdc++.h>
using namespace std;


long long int binomialcoeff(int n, int r)
{
	long long int c[n+1][r+1];
	int i,j;
	for(int i = 0 ; i <=n ; i++) {
		for(int j = 0; j <= r; j++) {
			if(j == 0 || j == i)
				c[i][j] = 1;
			else
				c[i][j] = c[i-1][j-1] + c[i-1][j];
		}
	}
	return c[n][r];
}

int findcombinations(int a,int b,int c)
{
	long long int sum1 = 0;
	long long int sum2 = 0;
	long long int sum3 = 0;
	long long int ans1 = 0;
	long long int sum1sum2sum3 = 0;
	for(int i = 1; i <= c ; i++) {
		sum3 += binomialcoeff(c,i);
	//cout<<"Sum1 is "<<sum3<<endl;
	}

	for(int i = 2; i <= a ; i++) {
		long long int ans = binomialcoeff(a,i);
		//cout<<"sum 2 is \n"<<ans<<endl;
		sum1 += ans;
		//cout<<sum1<<endl;
		for(int j = i-1; j < i; j++) {
			sum2 += binomialcoeff(b,j);
			//cout<<"sum 3 are \n"<<sum2<<endl;
		}
		//cout<<endl;
		sum1sum2sum3 += (ans * sum2 * sum3);
		//cout<<"total sum is"<<sum1sum2sum3<<endl;
	}
	cout<<sum1sum2sum3<<endl;

	//cout<<sum1;
	return 0;

}



int main()
{
	int t;
	int a = 0;
	int b = 0;
	int c = 0;
	cin>>t;
	while(t--) {
		cin>>a;
		cin>>b;
		cin>>c;
		//	cout<<"0";
		findcombinations(a,b,c);
	}
	return 0;
}

