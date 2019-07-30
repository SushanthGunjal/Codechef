#include<iostream>
#include<cstring>
using namespace std;

bool iscorrect(char s1[],char s2[])
{
	int m = strlen(s1);
	int n = strlen(s2);
	int i = 0;
	int j;
	for(int j = 0; j<m && i<n ;j++) {
		if(s1[j] == s2[i]) {
			i++;
		}
		//return (i==n);
	}
	return (i==n);

}


int main()
{
	int t;
	int n;
	char a;
	char str2[] = "codered";
	cin>>t;
	while (t--) {
		cin>>n;
		char str1[n];
		for(int i=0;i<n;i++)
		{
			cin>>a;
			str1[i] = a;
		}
		//cout<<str1;
		if (iscorrect(str1,str2)) {
			cout<<"yes"<<endl;
		}
		else {
			cout<<"no"<<endl;
		}
	}
	return 0;
}

