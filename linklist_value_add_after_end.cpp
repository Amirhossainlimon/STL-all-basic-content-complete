#include <iostream>
using namespace std;

// Node structure definition
class Node {
  public:
        int data;
       Node* next;
       Node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    int arr[] = {10, 20, 30, 40};
    Node* Head = NULL;

    for (int i = 0; i < 4; i++) {
        if (Head == NULL) {
            Head = new Node(arr[i]);
        }
        else {
            Node* tail = Head;
            while (tail->next != NULL) {
                tail = tail->next;
            }
            tail->next = new Node(arr[i]);
        }
    }


    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
