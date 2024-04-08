#include<iostream>
#include<stack>
using namespace std;
//stack stack is a linear data structure 
//stack is LIFO structure (Last in First Out)
//push=to add data in stack, pop=to remove data from stack ,peek=top of element in stack 

/*
int main(){
    //STL standard template library

    //creation of stack empty 
    stack<int>s;

    //push element in stack 
    s.push(2);
    s.push(3);
    s.push(4);

    //pop element in stack 
    s.pop();
    s.pop();
    s.pop();

    //top of element 
    cout<<"top of element is"<<s.top()<<endl;

    //empty or not stack
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}
*/



//Stack implementation using array

class Stack{
    public:
        int *arr;
        int size;
        int top;

    //stack constrcutor
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    //push in stack
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    //pop element from stack
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    //peek element of stack (top element of stack )
    int   peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack empty"<<endl;
        }
    }

    //stack is empty or not 
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);

    //push perform
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    //pop perform
    st.pop();
    st.pop();
    st.pop();

    st.pop();

    st.pop();


    //peak element
    cout<<st.peek()<<endl;

    //empty or not
    if(st.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}

