#include<iostream>
using namespace std;
int main()
{
    int t,j,temp;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int arr[n];
        int count = 0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int res[n+1];
        res[0] = 0;
        for(int i=0;i<=n;i++)
        {
            count = 0;
            j = i+1;
            k=i;
            //cout<<arr[j]<<"   "<<arr[i]<<endl;
            while((arr[j] < arr[k]) && j>=0)
            {
            	cout<<"Done   ";
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
                count++;
                j--;
                k--;
            }
            res[i+1] = res[i] + count;
            cout<<"res"<<res[i]<<"  "<<count<<endl;            
            //cout<<endl;
        }
        cout<<endl;
        cout<<res[n-1]<<endl;
    }
    return 0;
}
