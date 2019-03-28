#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int kk;
	int n;
	int temp;
	int flag;
	int result;
	while(a--)
	{
		cin>>n;
		result=0;
		kk=0;
		int arr1[n];
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			arr1[i]=0;
		}	
		do
		{
			flag=0;
			for(int i=0;i<n;i++)
			{
				if(arr[i]>i+1)
				{
					temp=arr[i+1];
					arr[i+1]=arr[i];
					arr[i]=temp;
					result++;
					flag=1;
					arr1[i]++;
					arr1[i+1]++;
				}
				else if(arr[i]<i+1)
				{
					temp=arr[i-1];
					arr[i-1]=arr[i];
					arr[i]=temp;
					result++;	
					flag=1;
					arr1[i]++;
					arr1[i-1]++;
				}
				if(arr1[i] > 2 || (arr1[i+1] > 2 && i<n-1) || (arr1[i-1] > 2 && i>0))
					kk=1;
			}
		}while(flag && (!kk));
		/*cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr1[i];
		}*9/*/
		if(kk==0)
			cout<<result<<endl;
		else
			cout<<"Too chaotic"<<endl	;
	}
	return 0;
}
