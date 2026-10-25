#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int value){
            this->data = value;
            this->next = nullptr;
        }
};

void insertAtTail(int value, Node *&head, Node *&tail){
    if(head == nullptr && tail == nullptr){
        Node * newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        Node *newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}

void printLinkedList(Node *head){
    Node *temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
}


void sort(Node *head){
    if (head == nullptr) return;

    for (Node *i = head; i != nullptr; i = i->next) {
        for (Node *j = i->next; j != nullptr; j = j->next) {
            if (i->data > j->data) {
                int x = i->data;
                i->data = j->data;
                j->data = x;
            }
        }
    }
}


int main(){

    Node *head = nullptr;
    Node *tail = nullptr;
    Node *prev = nullptr;

    insertAtTail(10, head, tail);
    insertAtTail(20, head, tail);
    insertAtTail(50, head, tail);
    insertAtTail(30, head, tail);
    printLinkedList(head);

    insertAtTail(60, head, tail);
    insertAtTail(70, head, tail);
    insertAtTail(80, head, tail);
    insertAtTail(40, head, tail);
    printLinkedList(head);

    
    sort(head);
    printLinkedList(head);

    return 0;
}