#include <iostream>
#include <cmath>
using namespace std;

int main() {
    uint64_t x, y;
    int r;
    cin >> r >> x >> y;

    float distance = sqrt(pow(x, 2) + pow(y, 2));
    
    if (distance < r) {
        cout << 2 << endl;
    } else {
        distance /= r;
        cout << ceil(distance) << endl;
    }
}
