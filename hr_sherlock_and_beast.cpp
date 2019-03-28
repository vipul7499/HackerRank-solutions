#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int five,three,flag;
	while(t--)
	{
		flag=1;
		cin>>n;
		five=n;
		three=0;
		while(five%3!=0 || three%5!=0)
		{
			five--;
			three++;
			if(five<0)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			cout<<"-1";
		else
		{
			for(int i=0;i<five;i++)
				cout<<"5";
			for(int i=0;i<three;i++)
				cout<<"3";
		}
		cout<<endl;
	}
	return 0;
}
