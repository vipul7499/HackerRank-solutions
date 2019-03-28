#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int arr1[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    int gcd[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            gcd[i][j]=GCD(arr[i],arr1[j]);
        }
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<gcd[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int r1,c1,r2,c2;
    set <int> s;

    while(q--)
    {
        set <int> s;
        cin>>r1>>c1>>r2>>c2;
        for(int i=r1;i<=r2;i++)
            for(int j=c1;j<=c2;j++)
            {
                s.insert(gcd[i][j]);
            }
        cout<<s.size()<<endl;
        
    }
    return 0;
}
