#include <bits/stdc++.h>
using namespace std;
int main() {
  char arr[21];
  long int st, end = 0;
  long int curr;
  int count = 0;
  gets(arr);
  for (int i = 11; i < 21; i++) {
    if (i == 13 || i == 16)
      continue;
    end = end * 10 + arr[i] - '0';
  }
  int day1 = 0, month1 = 0, year1 = 0, day2 = 0, month2 = 0, year2 = 0;
  day1 = (arr[0] - '0') * 10 + arr[1] - '0';
  month1 = (arr[3] - '0') * 10 + arr[4] - '0';
  year1 = arr[6] * 1000 + arr[7] * 100 + arr[8] * 10 + arr[9] - '0' * 1111;
  day2 = arr[11] * 10 + arr[12] - '0' * 11;
  month2 = arr[14] * 10 + arr[15] - '0' * 11;
  year2 = arr[17] * 1000 + arr[18] * 100 + arr[19] * 10 + arr[20] - '0' * 1111;
  while (!((year2 > year1) || (year2 == year1 && month2 < month1) ||
           (year2 == year1 && month2 == month1 && day2 < day1))) {
    curr = (day1 * 100 + month1) * 10000 + year1;
    //cout << curr << endl;
    if (curr % 4 == 0 || curr % 7 == 0)
      count++;
    day1++;
    if (day1 > 31) {
      day1 = 01;
      month1++;
    }
    if (month1 > 12) {
      month1 = 01;
      year1++;
    }
  }
  cout << count;
  return 0;
}


