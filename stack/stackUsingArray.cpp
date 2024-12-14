#include<iostream>
using namespace std;

typedef struct{
    int arr[100];
    int top;
}stack;

stack init(){
    stack s;
    s.top=-1;
    return s; 
}
int isEmpty(stack& s){
    return(s.top==-1);
}
int isFull(stack& s){
    return(s.top==99);
}
int top(stack& s){
    if (isEmpty(s))
    {
        cout<<"\nThe stack is empty\n";
        return -1;
    }
    else{
        cout<<"\nThe topmost element is: "<<s.arr[s.top];
        return s.arr[s.top];
    }
    
}
stack pop(stack& s){
    if(isEmpty(s)){
        cout<<"Stack is empty"<<endl;
        return s;
    }
    else{

        s.top--;
        return s;
    }
}
stack push(stack& s, int x){
    
    if (isFull(s))
    {
        cout<<"Stack is full"<<endl;
        return s;
    }
    else{
        ++s.top;
        s.arr[s.top]=x;
        return s;
    }
}
void print(stack& s){
    cout<<"\nThe elements are: ";
for (int i = 0; i < s.top+1; i++)
{
    cout<<s.arr[i]<<", ";
}

    }

int main(int argc, char const *argv[])
{
    stack s;
    s=init();
    s=push(s, 10);
    print(s);
    s=push(s,25);
    print(s);
    s=pop(s);
    print(s);
    top(s);
    s=push(s, 33);
    print(s);
    return 0;
}
