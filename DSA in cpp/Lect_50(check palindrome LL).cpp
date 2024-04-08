#include<iostream>
#include<vector>
using namespace std;
//palindrome linked list or not Approch 1 brust force code
class Solution {
    private:
    bool palindrome(vector<int>arr){
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }
            s++;
            e--;
            }
            return 1;
    }
public:
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        return palindrome(arr);
    }
};

//palindrome linked list second approch optimize solution 

class Solution{
    public:
    Node* getmid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    Node* reverse(Node* head){
        Node* curr=head;
        Node* next=NULL;
        Node* prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool palindrome(Node* head){
        if(head->next==NULL){
            return true;
        }
        Node* middle=getmid(head);
        mid->next=reverse(temp);
        Node* head1=head;
        Node* head2=mid->next;
        while(head2!=NULL){
            if(head2->data!=head1->data){
                return false;
            }
            head2=head2->next;
            head1=head1->next;
        }
        return true;
    }
};