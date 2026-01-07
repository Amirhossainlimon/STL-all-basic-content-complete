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

    int arr[] = {10, 20, 30, 40};

    Node* Head = NULL;
    Node* Tail = NULL;

    for(int i = 0; i < 4; i++) {

        if(Head == NULL) {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
    cout<<"Before adding a node Linked list:";
     Node* t1 = Head;
 while(t1 != NULL) {
        cout << t1->data << " -> ";
        t1 = t1->next;
    }
    cout << "NULL"<<endl;


    int pos = 3;     // je position e insert korbe
    int value = 99;  // je value insert korbe

    Node* temp = Head;
    int count = 1;

    while(count < pos-1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
    // -------------------------------------
cout<<"After adding a node Linked list:";
    Node* t = Head;
    while(t != NULL) {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << "NULL";

    return 0;
}

