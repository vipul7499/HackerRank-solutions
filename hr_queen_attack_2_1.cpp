#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n][n]={0};
	int x,y;
	int r,c;
	cin>>x>>y;
	while(k--)
	{
		cin>>r>>c;
		arr[r-1][c-1]=1;
	}
	x--;
	y--;
	int count=0;
	r = x+1;
	c = y;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		r++;
	}
	cout<<count<<endl;
	r = x;
	c = y+1;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		c++;
	}
	cout<<count<<endl;
	r = x-1;
	c = y;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		r--;
	}
	cout<<count<<endl;
	r = x;
	c = y-1;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		c--;
	}
	cout<<count<<endl;
	r = x+1;
	c = y+1;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		r++;
		c++;
	}
	cout<<count<<endl;
	r = x-1;
	c = y-1;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		r--;
		c--;
	}
	cout<<count<<endl;
	r = x+1;
	c = y-1;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		r++;
		c--;
	}
	cout<<count<<endl;
	r = x-1;
	c = y+1;
	while(r<n && c<n && r>=0 && c>=0 && arr[r][c]==0)
	{
		count++;
		r--;
		c++;
	}
	cout<<count;
	return 0;
}
