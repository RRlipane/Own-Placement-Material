#include<iostream>
using namespace std;

//Double linked list created
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //Constructor called
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    //Destrctor called
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node"<<val<<endl;
    }
};

//printdouble linked list

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//length of linked list

int length(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

//Insert at head element 
void InseratHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

//Insert at Tail Position
void InsertatTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

//Insert at any position in linked list 

void InsertatanyPosition(Node* &tail,Node* &head,int position,int d){
    //insert at start position
    if(position==1){
        InseratHead(head,d);
        return ;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    // at last position insert node
    if(temp->next==NULL){
        InsertatTail(tail,d);
        return;
    }

    Node* node2=new Node(d);
    node2->next=temp->next;
    temp->next->prev=node2;
    temp->next=node2;
    node2->prev=temp;
}

//Deleting node in double linked list
void DeleteNode(int position,Node* &head){
    //first or starting node delete
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr ->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

   // cout<<length(node1)<<endl;
    InseratHead(head,8);
    print(head);
    InseratHead(tail,11);
    print(head);
    InseratHead(head,10);
    print(head);
    InseratHead(tail,12);
    print(head);
    InsertatanyPosition(tail,head,2,50);
    print(head);


}
