#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    pair <float,int> p[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p[i].first=a+b+(0.0001*(i+1));
        p[i].second=i+1;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
        cout<<p[i].second<<" ";
    return 0;
}
