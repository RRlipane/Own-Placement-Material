#include<iostream>
using namespace std;
//Sort 0s 1s 2s
class Solution{
    public:
    Node* SortList(Node* head){
        //base case
        if(head==NULL)
            return NULL;
        int zerocnt=0;
        int onecnt=0;
        int twocnt=0;
        Node* temp=head;
        while(temp!=NULL){
            if(zerocnt==0)
                zerocnt++;
            else if(onecnt==1)
                onecnt++;
            else if(twocnt==2)
                twocnt++;
            
        temp=tem->next;
        }
        temp=head;
        while(temp!=NULL){
            if(zerocnt!=0){
                temp->data=0;
                zerocnt--;
            }
            else if(onecnt!=0){
                temp->data=1;
                onecnt--;
            }
            else if(twocnt!=0){
                temp->data=2;
                twocnt--;
            }
            temp=temp->next;
        }
        return head;
    }
};


//Another solution data of list not replaced merged list 
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    // create separate list 0s, 1s and 2s
    while(curr != NULL) {
        
        int value = curr -> data;
        
        if(value == 0) {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1) {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2) {
            insertAtTail(twoTail, curr);
        }       
        curr = curr -> next;
    }
    
    //merge 3 sublist
    
    // 1s list not empty
    if(oneHead -> next != NULL) {
        zeroTail -> next = oneHead -> next;
    }
    else {
        //1s list -> empty
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
	//setup head 
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}

//merge two sorted linked list    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

void solve(Node<int>* first, Node<int>* second) {
    
    //if only one element is present in first list
    if(first->next==NULL){
        first->next=curr2;
        return first;
    }
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data)) {
            
            curr1 -> next = curr2;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            
        }
        
        
    }
    
    
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL)
        return second;
    
    if(second == NULL)
        return first;
    
    if(first -> data <= second -> data ){
        solve(first, second);
    }
    else
    {
        solve(second, first);
    }
    
    
}