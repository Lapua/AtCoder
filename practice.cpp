#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num = 0;
    vector<int> vec{1, 2, 3};

    swap(vec[0], vec[2]);

    for (int i = 0; i < 1<<3; ++i) {
        cout << i << endl;
    }
}
