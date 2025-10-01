#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<any>v;
    v.push_back(10);          // int
    v.push_back(string("Hi")); // string
    v.push_back(3.14);        // double

    cout << any_cast<int>(v[0]) << endl;
    cout << any_cast<string>(v[1]) << endl;
    cout << any_cast<double>(v[2]) << endl;

}
