#include <iostream>
using namespace std;

// https://atcoder.jp/contests/abc081/tasks/abc081_b
int main() {
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 999999;
    for (int i = 0; i < n; i++) {
        int cnt = 0 ;
        while (true) {
            if (a[i] % 2 == 0) {
                a[i] = a[i] / 2;
                cnt++;
            } else {
                if (cnt < ans) {
                    ans = cnt;
                }
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
