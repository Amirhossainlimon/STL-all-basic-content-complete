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

int main(){

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

    cout<<"Before deleting last node Linked list:";
    Node* t1 = Head;
    while(t1 != NULL) {
        cout << t1->data << " -> ";
        t1 = t1->next;
    }
    cout << "NULL"<<endl;

    if(Head != NULL){

        if(Head->next == NULL){
            delete Head;
            Head = NULL;
        }
        else{
            Node* curr = Head;
            Node* prev = NULL;

            while(curr->next != NULL){
                prev = curr;
                curr = curr->next;
            }

            delete curr;
            prev->next = NULL;
        }
    }
    else{
        cout<<"List is empty..!"<<endl;
    }


    cout<<"After deleting last node Linked list:";
    Node* temp = Head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL"<<endl;

    return 0;
}

