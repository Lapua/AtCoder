#include <iostream>
using namespace std;

int main() {
    int n, yen, k, left;
    int money[3] = {0, 0, 0};

    cin >> n >> yen;
    yen /= 1000;

    for (int i = 0; i <= yen/10; ++i) {
        left = yen - (i * 10);
        for (int j = 0; j <= left/5; ++j) {
            left -= j * 5;
            k = left;

            if (i+j+k == n) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }

            left += j * 5;
        }
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}
