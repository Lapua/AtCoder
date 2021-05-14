#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
#include <bitset>
using namespace std;

int main() {
    int num = 1;
    vector<int> vec(5);
    
    // 4ケタ0埋め
    // <iomanip>
    cout << setfill('0') << setw(4) << num << endl;

    // stringをcinするときは初期化しておく

    // <cmath>
    pow(2, 2);
    sqrt(4) // 平方根
    floor(3.1) //切り捨て
    ceil(3.2) //切り上げ

    // <algorithm>
    sort(vec);
    max_element(vec.begin(), vec.end());

    // <bitset>
    bitset<8> bs1(7);
    bitset<8> bs2("111");
}