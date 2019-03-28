#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int min,test,a;
	vector <int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-k;i++)
	{
		test=v[i+k-1]-v[i];
		if(i==0)
			min=test;
		if(min>test)
			min=test;
	}
	cout<<min;
	return 0;
}
