#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


int main() {
Node*head;
head= nullptr;

int a[4]= {2,4,6,3};
for(int i=0; i<4 ; i++){
    if(head==NULL){
        head= new Node(a[i]);
    }
    else{
        Node*temp;
        temp=new Node(a[i]);
        temp->next = head;
        head= temp;

        }
}
cout<<"Linkedlist:";
 Node*t=head;
while(t!=NULL){
    cout<<t->data<<",";
    t=t->next;
}

    return 0;
}
