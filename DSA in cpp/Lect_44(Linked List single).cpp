#include<iostream>
#include<map>
using namespace std;

//create a class Node link list

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->data!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"The memory is deleter node value are:"<<value<<endl;
    }
};

//insert node value using Head at starting position

void InsertHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp ->next = head;
    head=temp;
}

// Print the node

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//inset node value at tail at ending of node

void InsertTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail ->next=tail;
    tail=temp;
}


//Insert element at middle position

void InsertMid(Node* &tail,Node* &head,int position,int d){
    //insert at start
     if(position==1){
        InsertHead(head,d);
        return ;
    }
    //insert at last position
    if(temp->next==NULL){
        InsertTail(tail,d);
        return;
    }

    Node* temp=head;
    int c=1;
    while(c<position-1){
        temp=temp->next;
        c++;
    }
    Node* node2=new Node(d);
    node2 -> next=temp->next;
    temp->next=node2;
}

//Deletion of node 

void DeletionNode(int position,Node* &head){
    //deleting of starting or first node
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete* temp;
    }
    else{
        // delete node either middle or last 
        Node* cur=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            cur=cur->next;
            prev=cur;
            cnt++;
        }
        prev->next=cur->next;
        tem->next=NULL;
        delete cur;
    }
}

int main(){
    Node* node1=new Node(10);

    Node* head=node1;
    Node* tail=node1;

     InsertHead(tail,10);
    print(tail);

     InsertHead(tail,14);
    print(tail);

     InsertHead(tail,18);
    print(tail);

    return 0;

}

