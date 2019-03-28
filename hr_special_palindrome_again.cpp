#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int flag=0;
	int prevprev=0;
	int prev=0;
	int curr=1;
	char c=s.at(0);
	char temp;
	int test=1;
	for(int i=1;i<n;i++)
	{	
		
		if(c == s.at(i))
		{
			
			curr++;
			if(test>=2)
				if(prev==1 && s.at(i)==s.at(i-curr-1) && curr==prevprev)
				{
					flag += curr;	
				//	cout<<flag;
					cout<<"FLAG";
				}
				if(i==4)
				{
					cout<<"yes"<<prev<<s.at(i)<<s.at(i-curr-1)<<curr<<prevprev;
				}
		}
		else
		{
			prevprev=prev;
			prev=curr;
			
			if(test>=2)
			{
				if(prev==1 && s.at(i)==s.at(i-2) && curr==prevprev)
				{
					flag += (curr);	
				//	cout<<1<<flag<<endl;
					cout<<"FLAG";
				}
				else
				{
					if(test==2)
					{
						if(curr != 1)
							flag += curr*(curr-1)/2;
						if(prev != 1)
							flag += prev*(prev-1)/2;
						if(prevprev != 1)
							flag += prevprev*(prevprev-1)/2;
					//	cout<<"kkk"<<curr<<prev<<prevprev<<"\n";
					}
					else if(curr != 1)
					{
						flag += curr*(curr-1)/2; 
					//	cout<<"lllll"<<curr<<endl;
					}
				//	cout<<2<<flag;
				}
			}
		
			c=s.at(i+1);	
			test++;		
			curr=0;	
				
		}
			cout<<i<<" "<<curr<<endl;
	}
	if(test == 1)
		cout<<curr*(curr+1)/2;
	else if(test==2)
		cout<<curr*(curr+1)/2 + prev*(prev+1)/2;
	else
		cout<<flag+s.length();
	return 0;
}
