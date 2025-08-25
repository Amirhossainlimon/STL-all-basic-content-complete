#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 7};

    sort(v.begin(), v.end());  // Sort vector in ascending order

    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}
