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
    Node*Tail=NULL;

    for (int i = 0; i < 4; i++) {
        if (Head == NULL) {
            Head = new Node(arr[i]);
            Tail=Head;
        }
        else {
            Tail->next= new Node(a[i]);
            Tail= Tail->next;  
          
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

