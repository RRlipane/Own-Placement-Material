#include<iostream>
using namespace std;

//Create a circular linked list first create a node

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free of node"<<val<<endl;
    }
};

//Inserting nodes at tail position 
// In circular linked list there is no used of head only tail used

void InseratTail(Node* tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* node1=new Node(d);
        tail=node1;
        node1->next=node1;
    }
    else{
        //list are not empty
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}

//print linked list

void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

//delete first,mid,last node in linked list

void delete1(Node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"link kist is empty"<<endl;
    }
    Node* prev=tail;
    Node* curr=prev->next;
    while(curr->data!=value){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    if(curr==prev){
        tail=NULL;
    }
    else if(tail==curr){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;

}

int main(){
    Node* node1=new Node(10);
    Node* tail=node1;

    InseratTail(tail,5,3);
    print(tail);

    InseratTail(tail,6,4);
    print(tail);

    InseratTail(tail,7,5);
    print(tail);

    InseratTail(tail,8,6);
    print(tail);
}
