#include <iostream>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;

  while (testCase--) {
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
    }
    int sum_1 = 0;
    int sum_2 = 0;
    if ((n < 2 || m < 2) || (k > n || k > m)) {
      cout << -1 << endl;
    }

    else {
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < k; j++) {
          sum_1 += arr[i][j];
        }
      }
      for (int i = 0; i < k; i++) {
        for (int j = 0; j < 2; j++) {
          sum_2 += arr[i][j];
        }
      }
      if (sum_2 > sum_1)
        cout << sum_1 << endl;
      else
        cout << sum_2 << endl;
    }
  }
  return 0;
}
