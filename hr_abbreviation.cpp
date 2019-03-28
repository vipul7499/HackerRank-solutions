#include<iostream>
using namespace std;
int func(string a,string b)
{
	if(a.length()<b.length())
		return 0;
	else
	{
		int j=0,i=0;		
		while(i<b.length())
		{
			if(j>=a.length())
			{
				
				return 0;
			}
			if(toupper(a.at(j))!=toupper(b.at(i)) && isupper(a.at(j)))
			{
				
			//	cout<<i<<" "<<j;
				return 0;
			}
			if(toupper(a.at(j))==toupper(b.at(i)))
			{
				i++;
			}
			j++;
		}
		while(j<a.length())
		{
			cout<<j;
			if(isupper(a.at(j)))
			{
			//	cout<<"LLLLLLL";
				return 0;
			}
			j++;
		}
		return 1;
	}
}
int dp(string a,string b)
{
	int l1=a.length()-1;
	int l2=b.length()-1;
	int temp,flag;
	while(l2>=0)
	{
		if(toupper(b.at(l2))==toupper(a.at(l1)))
		{
			flag=0;
			if(islower(a.at(l1)))
			{
				temp=l1-1;
				if(l2>0 && temp>0)
					while(toupper(b.at(l2-1)) != toupper(a.at(temp)) && temp>0)
					{
						if(toupper(a.at(l1)) == toupper(a.at(temp)))
						{
							l1=temp;
							flag=1;	
							break;					
						}
						if(isupper(a.at(temp)))
							return 0;
						temp--;
					}
			}
			l2--;
			l1--;
		}
		else
		{
			if(isupper(a.at(l1))){
				return 0;
			}
			l1--;
		//SYIHDDSMREKXOKRFDQAOZJQXRIDWXPYINFZCEFYyxu
		//	SYIHDDSMREKXOKRFDQAOZJQXRIDWXPYINFZCEFY
		}
	}
	while(l2==0 && l1 != 0)
	{
		if(isupper(a.at(l1)))
		{
			return 0;

		}
			l1--;
	}
	return 1;
}
int main()
{
	int n;
	string a,b;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cin>>b;
		if(dp(a,b))
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
		
	}
	return 0;
}
