#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int val;
    int n;
    cin >> val >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
      if (!flag)
        for (int j = i+1; j < n; j++) {
          if (arr[i] + arr[j] == val) {
            cout << i + 1 << " " << j + 1 << endl;
            flag = 1;
            break;
          }
        }
  }
  return 0;
}
