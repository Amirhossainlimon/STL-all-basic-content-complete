#include <iostream>
using namespace std;

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

    int arr[] = {20, 8, 10, 40};  // sample linked list
    Node* Head = NULL;
    Node* Tail = NULL;

    for(int i = 0; i < 4; i++) {
        if(Head == NULL) {
            Head = new Node(arr[i]);
            Tail = Head;
        } else {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    cout << "Before deleting particular node Linked list: ";
    Node* t = Head;
    while(t != NULL) {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << "NULL" << endl;

    int key = 10;  // value to delete

    Node* curr = Head;
    Node* prev = NULL;

    // handle first node separately
    if(Head != NULL && Head->data == key) {
        Node* temp = Head;
        Head = Head->next;
        delete temp;
    } else {
        // traverse to find the node
        while(curr != NULL && curr->data != key) {
            prev = curr;
            curr = curr->next;
        }


        if(curr != NULL) {
            prev->next = curr->next;
            delete curr;
        }
    }

    cout << "After deleting particular node Linked list: ";
    Node* temp = Head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
