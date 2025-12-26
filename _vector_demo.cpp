#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << "Before push back size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "after push back size = " << vec.size() << endl;
    cout<<"1st value:"<<vec.front()<<endl;
    cout<<"last value:"<<vec.back()<<endl;

    cout<<"check values of index 0:"<<vec[0]<<endl;
    cout<<"check values of index 0:"<<vec.at(0)<<endl;

    cout<<"And values are:"<<endl;
    for (int i : vec) {
        cout << i<< endl;
    }

    vec.pop_back(); // Removes the last element (45)

cout<<"After pop back"<<endl;
    for (int i : vec) {
        cout << i << endl;
    }

    return 0;
}
