#include <iostream>
using namespace std;

// https://atcoder.jp/contests/abc087/tasks/abc083_b
int main() {
    int n, a, b;
    std::cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int res = 0;
        int tmp = i;
        while (0 < tmp) {
            res += tmp % 10;
            tmp /= 10;
        }

        if (a <= res && res <= b) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}
