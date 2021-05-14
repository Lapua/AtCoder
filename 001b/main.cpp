#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float distance;
    cin >> distance;
    distance /= 1000;

    int vv;

    if (distance < 0.1)
    {
        vv = 0;
    } else if (distance <= 5) {
        vv = distance * 10;
    } else if (distance <= 30) {
        vv = distance + 50;
    } else if (distance <= 70) {
        vv = (distance-30) / 5 + 80;
    } else {
        vv = 89;
    }

    cout << setfill('0') << setw(2) << vv << endl;
}