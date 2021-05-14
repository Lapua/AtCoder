#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, numQuery, t, a, b;
    string str;

    cin >> n;
    cin >> str;
    cin >> numQuery;

    string tmp(n, 'a');

    for (int i = 0; i < numQuery; ++i) {
        cin >> t >> a >> b;
        if (t == 2) {
            copy(str.begin(), str.end() - n, tmp.begin());
            copy(str.begin() + n, str.end(), str.begin());
            copy(tmp.begin(), tmp.end(), str.begin() + n);
        } else {
            swap(str[a - 1], str[b - 1]);
        }
    }

    cout << str << endl;
}
