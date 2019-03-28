#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	set <int> s;
	int flag=n-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		s.insert(arr[i]);
	}
	int i=0;
	set <int>::iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		if(*it==arr[i])
			flag--;
		i++;
	}
	cout<<flag;
	return 0;
}
