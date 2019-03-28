#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,k,counter=0;
	cin>>n>>k;
	vector <int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		if(binary_search(v.begin(),v.end(),v[i]+k))
			counter++;
	}
	cout<<counter;
	return 0;
}
