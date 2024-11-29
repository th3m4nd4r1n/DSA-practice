#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node * prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this -> prev = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;

}

print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    Node* node1 = new Node(29);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtTail(tail, 77);
    print(head);
    return 0;
}
