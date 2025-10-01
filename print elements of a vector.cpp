#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10,20,30,40,50};
    for (int i : nums) {
    cout<<i<<endl;
    }

 /*both syntax correct for vector loops.
   for (auto i : nums) {
    cout<<i<<endl;
    } */

    return 0;
}
