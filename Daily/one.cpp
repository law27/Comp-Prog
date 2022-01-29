#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        int num = 0;
        cin >> num;
        ans += num;
    }
    cout << ans << endl;
    return 0;
}
