// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtTail(int d, Node* &tail) {
    Node* temp = new Node(d);
    temp -> data = d;
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;
    
    while(temp -> next != NULL){
        cout << temp -> data << "  ";
        temp = temp -> next;
    }
}
int main() {
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
    
    Node* tail = node1;
    Node* head = node1;
    
    insertAtTail(11, tail);
    cout << endl;
    
    insertAtTail(12, tail);
    print(head);
    cout << endl;
    
    insertAtTail(13, tail);
    print(head);

    return 0;
}