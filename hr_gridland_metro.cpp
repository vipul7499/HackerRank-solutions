#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,t;
	cin>>m>>n>>t;
	int r,c1,c2;
	int count=0;
	set <pair<int,int[2]> > s;
	set <pair<int,int> >::iterator it;
	for(int i=0;i<t;i++)
	{
		cin>>r>>c1>>c2;
		for(int i=c1;i<c2;i++)
		{
			s.insert({r,{i,1}});
		}
	}
	for(it=s.begin();it != s.end();it++)
		count++;
	cout<<count;
	return 0;
}
