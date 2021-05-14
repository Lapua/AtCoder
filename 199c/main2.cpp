#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, numQuery, t, a, b;
    string str;
    bool isOrder = true;

    cin >> n;
    cin >> str;
    cin >> numQuery;

    string str1(n, 'a'), str2(n, 'a');
    copy(str.begin(), str.end() - n, str1.begin());
    copy(str.begin() + n, str.end(), str2.begin());

    for (int i = 0; i < numQuery; ++i) {
        cin >> t >> a >> b;
        if (t == 2) {
            if (isOrder) {
                isOrder = false;
            } else {
                isOrder = true;
            }
        } else {
            if (isOrder) {
                if (a <= n) {
                    if (b > n) {
                        swap(str1[a-1], str2[b-n-1]);
                    } else {
                        swap(str1[a-1], str1[b-1]);
                    }
                } else {
                    if (b > n) {
                        swap(str2[a-n-1], str2[b-n-1]);
                    } else {
                        swap(str2[a-n-1], str1[b-1]);
                    }
                }
            } else {
                if (a <= n) {
                    if (b > n) {
                        swap(str2[a-1], str1[b-n-1]);
                    } else {
                        swap(str2[a-1], str2[b-1]);
                    }
                } else {
                    if (b > n) {
                        swap(str1[a-n-1], str1[b-n-1]);
                    } else {
                        swap(str1[a-n-1], str2[b-1]);
                    }
                }
            }
        }
    }

    if (isOrder) {
        cout << str1 << str2 << endl;
    } else {
        cout << str2 << str1 << endl;
    }
}
