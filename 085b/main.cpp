#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, tmp;
    set<int> mochi;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        mochi.insert(tmp);
    }

    cout << mochi.size() << endl;
}
