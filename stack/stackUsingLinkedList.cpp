#include<iostream>

    using namespace std;
    
    struct Node{
        int data;
        struct Node* next;
    };

 int isEmpty(struct Node* top){
    return(top==NULL);
 }


 int isFull(struct Node* top){
struct Node* p = (struct Node*)malloc(sizeof(struct Node));
return(p==NULL);
 }
 
 struct Node* push(struct Node* top, int d){
        if(isFull(top)){
            cout<<"Stack overflow\n";
        }
        else{
            struct Node* n = (struct Node*)malloc(sizeof(struct Node));
            n->data = d;
            n->next = top;
            top=n;
            return top;
        }
} 

// int pop(struct Node** ptr){
//     if(isEmpty(*ptr)){
//         cout<<"The stack in empty\n";
//     }
//     else{
//         struct Node* n = *ptr;
//        *ptr = (*ptr)->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }

struct Node* pop(struct Node* top){
    if(isEmpty(top)){
        cout<<"The stack is empty\n";
    }
    else{
        struct Node* n = top;
        top = top->next;
        int x = n->data;
        free(n);
        cout<<"\nThe popped element is: "<<x<<endl;
        return top;

    }
}

    void print(struct Node* ptr){
        while(ptr != NULL){
            cout<<" "<<ptr->data;
            ptr = ptr->next;
        }
        cout<<endl;
    }


    int main(int argc, char const *argv[])
    {
        struct Node* top = NULL;
        top=push(top, 50);
        top = push(top, 77);
        print(top);
        top = pop(top);
        print(top);
        return 0;
    }
    