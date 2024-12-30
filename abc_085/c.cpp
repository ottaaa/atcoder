#include <iostream>
using namespace std;

// https://atcoder.jp/contests/abc087/tasks/abc085_c
int main() {
    int n,y;
    std::cin >> n >> y;

    // int ans = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n -i; j++) {
            int total = 10000 * i + 5000 * j + 1000 * (n - i - j);
            if (total == y){
                cout << i << " " << j << " " << n - i - j << endl;
                return 0;
            }
        }
    }
    // cout << ans << endl;

    cout << "-1 -1 -1" << endl;

    return 0;
}
