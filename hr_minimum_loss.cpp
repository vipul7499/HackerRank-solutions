#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	map <int,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		m[arr[i]]=i;
	}	
	sort(arr,arr+n);
	int min=INT_MAX;
	for(int i = n-1; i >0; i--)
	{
		if(arr[i]-arr[i-1] < min)
			if(m[arr[i]] < m[arr[i-1]])
			{
				min=arr[i]-arr[i-1];
			}
	}
	cout<<min;
	return 0;
}
