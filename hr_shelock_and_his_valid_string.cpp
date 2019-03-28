#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	map <char,int> m;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		m[s.at(i)]++;
	}
	int flag=0;
	int temp;
	map <char,int>::iterator it;
	it=m.begin();
	temp=it->second;
	for(it=m.begin();it!=m.end();it++)
	{
		if(temp != it->second)
			flag++;
		if(flag == 2)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
