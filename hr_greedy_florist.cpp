#include<bits/stdc++.h>
using namespace std;
int greedy_florist(int n,int frnds,int arr[])
{
	int cost =0,flag=frnds;
	sort(arr,arr+n);
	int a=0;
	for(int i=n-1;i>=0;i--)
	{
		if(flag>0)
		{
			cost += (a+1)*arr[i];
			flag--;
		}
		if(flag==0)
		{
			flag=frnds;
			a++;
		}
	}
	return cost;
}
int main()
{
	int n,frnds;
	cin>>n>>frnds;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<greedy_florist(n,frnds,arr);
	return 0;
}
