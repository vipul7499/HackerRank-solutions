#include<iostream>
using namespace std;
int main()
{
    int n,test;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    int res[n];
    res[0]=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            res[i]=res[i-1]+1;
        }
        if(arr[i-1]==arr[i])
        {
            res[i]=res[i-1];
        }

    }
    /*for(int i=0;i<n;i++)
        cout<<" "<<res[i]<<"   "<<arr[i]<<endl;
    for(int i=0;i<m;i++)
        cout<<endl<<arr1[i]<<endl;*/
    for(int i=0;i<m;i++)
    {
        if(arr1[i]<arr[n-1])
        {
               // cout<<"OOO"<<"   "<<arr1[i]<<"      "<<arr[n-1];
            cout<<res[n-1]+1<<endl;
            continue;
        }
        for(int j=n-1;j>0;j--)
        {
            //cout<<arr[i];
            if(arr[j]<arr1[i] && arr[j-1]>arr1[i])
            {
                cout<<res[j]<<endl;
                break;
            }
            else if(arr[j] == arr1[i])
            {
                cout<<res[j]<<endl;
                break;
            }
        }
        if(arr1[i]>arr[0])
        {
            cout<<1<<endl;
            //cout<<"OOO"<<arr1[i]<<"   "<<arr[n-1];
            continue;
        }
    }
    return 0;
}


