#include<iostream>
using namespace std;
int visited[25][25]={0};
int knightL(int i,int j,int a,int b,int n)
{
	if(i>=n || j>=n)
		return 100;
	if(visited[i][j]==1)
		return 100;
	if(i==n-1 && j==n-1)
		return 0;
	visited[i][j] = 1;
	int a1 = knightL(i+a,j+b,a,b,n) +1;
	int a2 = knightL(i+b,j+a,a,b,n) +1;
	int a3 = knightL(i+a,j-b,a,b,n) +1;
	int a4 = knightL(i+b,j-a,a,b,n) +1;
	int a5 = knightL(i-a,j+b,a,b,n) +1;
	int a6 = knightL(i-b,j+a,a,b,n) +1;
	int a7 = knightL(i-a,j-b,a,b,n) +1;
	int a8 = knightL(i-b,j-a,a,b,n) +1;
	return min(a1,max(a2,max(a3,max(a4,max(a5,max(a6,max(a7,a8)))))));
}
int main()
{
	int n;
	cin>>n;
	cout<<knightL(0,0,1,1,5);
	return 0;
}
