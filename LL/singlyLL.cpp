#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node()
    {
        int value = this -> data;
        if (this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory for "<< value <<" freed\n";
        
    }


};

    void insertAtTail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail->next = temp;
       tail = temp;
    }

    void insertAtHead(Node* &head, int d){
       Node* temp = new Node(d);
       temp -> next = head;
       head = temp;
        
    }
    void insertAtPosition(Node* &head, int position,int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt =1 ;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp -> next = nodeToInsert;
}
void deleteNode(int position, Node* &head, Node* &tail){
    if (position==1){
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1 ;
        while(cnt<position ){
            prev = curr;
            curr = curr -> next;
            cnt ++;
        }
        prev -> next = curr -> next;
        if(curr->next=NULL){
          tail->next = prev;
          tail = prev;
        }
        curr->next = NULL;
        delete curr;

    }
}
    void print(Node* &head){
         Node* temp = head;

         while(temp != NULL){
            cout<<temp->data<<" ";
        temp = temp -> next;

         }
         cout<<endl;
    }

int main(int argc, char const *argv[])
{
   Node* node1 = new Node(10);
   Node* head = node1;
   Node* tail = node1;
print(head);
   insertAtHead(head, 12);

   print(head);

   insertAtTail(tail, 15);
   print(head);

insertAtPosition(head, 3, 50);
print(head);
cout<<tail->data<<endl;
deleteNode(4, head, tail);
print(head);
cout<<tail->data<<endl;
    return 0;
}

