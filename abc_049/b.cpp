#include <iostream>
#include <algorithm>
using namespace std;

// https://atcoder.jp/contests/abc049/tasks/arc065_a
int main() {
    string strs[4] = {"dream", "dreamer", "erase", "eraser"};
    string s;
    std::cin >> s;

    std::reverse(s.begin(), s.end());
    for (int i = 0; i < 4; i++) {
        std::reverse(strs[i].begin(), strs[i].end());
    }

    while (0 < s.size()) {
        bool dividable = false;
        // 文字列が一致するかどうかのチェック
        for (int i = 0; i < 4; i++) {
            string sub = s.substr(0, strs[i].size());
            if (sub != strs[i]) {
                continue;
            }
            s = s.substr(strs[i].size());
            dividable = true;
        }

        if (dividable) {
            continue;
        }

        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    return 0;
}
