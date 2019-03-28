#include <bits/stdc++.h> 
using namespace std;
int FraudulentActivityNotifications(int *a, int n, int d)
 {
    	int MAX_EXPENDITURE = 200;

        int ans = 0;
        int histogram[201];
 
        // Carry a histogram of the last d expenditures
        for (int i = 0; i < d; i++) {
            histogram[a[i]] = histogram[a[i]] + 1;
        }
 
        for (int i = d; i < n; i++) {
            int cursor = 0;

            int currentAmount = a[i];
            double median = 0;
            int left = -1;
            int right = -1;
            for (int e = 0; e <= MAX_EXPENDITURE; e++) {
                cursor += histogram[e];
                if (d % 2 == 1) {
                    // Odd -> Pick middle one for median
                    if (cursor >= d / 2 + 1) {
                        median = e;
                        break;
                    }
                } else {
                    // Even -> Pick average of two middle values for median
                    if (cursor == d / 2) {
                        left = e;
                    }
 
                    if (cursor > d / 2 && left != -1) {
                        right = e;
                        median = (left + right) / 2.0;
                        break;
                    }
 
                    if (cursor > d / 2 && left == -1) {
                        median = e;
                        break;
                    }
                }
 
            }
 
            if (currentAmount >= 2 * median) {
                ans++;
            }
 			cout<<median<<" "<<ans;
            // Update histogram: slide window 1 index to right
            histogram[a[i - d]] = histogram[a[i - d]] - 1;
            histogram[a[i]] = histogram[a[i]] + 1;
        }
 
 
        return ans;
}
int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<FraudulentActivityNotifications(arr,n,d);
}
