#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>
using namespace std;

int main() {
    int n, input, xorResult, orResult;
    cin >> n;
    vector<int> inputVec(n), result;
    vector<vector<int>> multi;

    for (int i = 0; i < n; ++i) {
        cin >> input;
        inputVec[i] = input;
    }

    if (n == 1) {
        cout << inputVec[0] << endl;
        return 0;
    }
    
    for (int i = 1; i < 1<<(n-1); ++i) {
        bitset<19> bs(i);
        orResult = inputVec[0];
        xorResult = 0;
        for (int j = 1; j < n; ++j) {
            if (bs[j-1]) {
                xorResult ^= orResult;
                orResult = inputVec[j];
            } else {
                orResult |= inputVec[j];
            }
        }
        xorResult ^= orResult;
        result.push_back(xorResult);
    }
    cout << *min_element(result.begin(), result.end()) << endl;
}
