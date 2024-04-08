#include<iostream>
#include<map>
using namespace std;
//reverse linked list by using recursion
void reverse(Node* &head,Node* curr,Node* prev){
    //base case
    if(curr==NULL){
        head=prev;
        return;
    }

    Node* forward=curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}
void Node(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        reverse(head,curr,prev);
        return head;
}

//by using iterative 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
};

//Another approch using recursion 

Node* reverse1(Node* head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* chottahead=reverse1(head->next);

    head->next->next=head;
    head->next=NULL;

    return chottahead;
}



//Find the middle of elements


int getlength(ListNode* head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    return len;
}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=getlength(head);
        int ans=len/2;
        ListNode* temp=head;
        int cnt=0;
        while(cnt<ans){
            temp=temp->next;
            cnt++;
        }
        return temp;
    }
};

//reverse linked list kth group
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) {
        return NULL;
    }
    //step1: reverse first k nodes
    ListNode* next = NULL;
    ListNode* curr = head;
    ListNode* prev = NULL;
    int count= 0;  
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL) {
        head -> next = reverseKGroup(next,k);
    }
    return prev;
    }
};

//Check it is circular liinked list or not 

bool isCircular(Node* tail){
    //base case
    if(tail==NULL){
        return true;
    }
    Node* temp=tail;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    if(temp==head){
        return true;
    }
    return false;
}


//Reverse double linked list 
Node* reverseDouble(Node* head){
    //base case
    if(head==NULL){
        head=prev;
        return;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        curr->prev=curr->next;
        prev=curr;
        curr=curr->next;
    }
    return prev;
}

//Detect cycle is present or not in linked list
bool Detectcycle(Node* head){
    //base case
    if(head==NULL){
        return false;
    }
    map<Node*,bool>visit;
    Node* temp=head;
    while(temp!=NULL){
        if(visit[temp]==true){
            return 1;
        }
        visit[temp]=true;
        temp=temp->next;
    }
    return false;
}

//detect cycle another approch Floyd's Algorithm
bool Floydsdetect(Node* head){
    //base case 
    if(head==NULL){
        return NULL;
    }
    Node* fast=NULL;
    Node* slow=NULL;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return false;
}

//detect and remove of starting node
//find starting node 
Node* getstartnode(Node* head){
    if(head==NULL){
        return ;
    }
    Node* intersection=Floydsdetect(head);
    Node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

//remove starting node
void removestarting(Node* head){
    if(head==NULL){
        return ;
    }
    Node* startloop=getstartnode(head);
    Node* temp=startloop;
    while(temp->next=startloop){
        temp=temp->next;
    }
    temp->next=NULL;
}

//remove duplicated from linked list
class removelist{
    public:
    Node* RemoveDuplicates(Node* head){
        //base case
        if(head==NULL)
            return NULL;
        
        Node* curr=head;
        while(curr!=NULL){
            if((curr->next!=NULL)&&curr->data==curr->next->data){
                Node* next_next=curr->next->next;
                Node* deleteNode=curr->next;
                delete(deleteNode);
                curr->next=next_next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};

//remove duplicate unsorted list
class Removedupl(Node* head){
    public:
    Node* duplicates(Node* head,int val){
        //base case
        if(head==NULL)
            return NULL;
        //recursion call 
        head->next=duplicates(head->next,val);
        if(head->val==val){
            return head->next;
        }
        return head;
    }
};




