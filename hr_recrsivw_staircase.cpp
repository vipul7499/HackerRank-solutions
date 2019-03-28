#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		if(n==1)
			cout<<1;
		else if(n==2)
			cout<<2;
		else if(n==3)
			cout<<4;
		else
		{
			long long int arr[n];
			arr[0]=1;
			arr[1]=2;
			arr[2]=4;
			for(int i=3;i<n;i++)
			{
				arr[i]=arr[i-3]+arr[i-2]+arr[i-1]; 
			}
			cout<<arr[n-1]%10000000007<<endl;
		}
	}
}
