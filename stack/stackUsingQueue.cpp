#include<iostream>
#include<queue>
using namespace std;

class stack{
    private:
    int data;
    queue<int> q1;
    queue<int> q2;
    public:
    stack(){
        data = 0;
    }

    void push(int d){
        q2.push(d);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
    }
    queue<int> temp;
    temp=q1;
    q1=q2;
    q2=temp;
        
}



void pop(){
 q1.pop();   
}

void print(){
    cout<<"\nTop element is: "<<q1.front();
}

int size(){
    
    return q1.size();
}

};


int main(int argc, char const *argv[])
{
    
    stack st;
    st.push(1);
    st.push(34);
    st.push(33);
    st.push(31);
    st.print();
    cout<<"\nThe size is: "<<st.size();
    st.pop();
    st.print();
    cout<<"\nThe size is: "<<st.size();
    st.pop();
    st.print();
    cout<<"\nThe size is: "<<st.size();
    st.pop();
    st.print();
    cout<<"\nThe size is: "<<st.size();
    st.pop();
    cout<<"\nThe size is: "<<st.size();
    return 0;
}

