#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec_a(n), vec_b(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec_a.at(i);
    }
    for (int i = 0; i < n; ++i) {
        cin >> vec_b.at(i);
    }

    sort(vec_a.begin(), vec_a.end());
    sort(vec_b.begin(), vec_b.end());

    int result = vec_b.front() - vec_a.back() + 1;
    if (result < 0)
    {
        result = 0;
    }
    
    cout << result << endl;
}
