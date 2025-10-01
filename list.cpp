#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;
    myList.push_back(5);
    myList.push_back(15);
    myList.push_back(25);

    cout << "List: ";
    for (int x : myList)
        cout << x << " ";
    return 0;
}


