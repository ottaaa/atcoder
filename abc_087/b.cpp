#include <iostream>
using namespace std;

// https://atcoder.jp/contests/abc087/tasks/abc087_b
int main() {
    int a, b, c, x;
    std::cin >> a >> b >> c >> x;

    int ans = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                int res = 500 * i + 100 * j + 50 * k;

                if (res == x) ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
