#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int res[n];
	res[0]=arr[0]>0?arr[0]:0;
	res[1]=max(res[0],arr[1]);
	for(int i=2;i<n;i++)
	{
		res[i]=max(res[i-1],arr[i]+res[i-2]);
	}
	cout<<res[n-1];
	return 0;
}

