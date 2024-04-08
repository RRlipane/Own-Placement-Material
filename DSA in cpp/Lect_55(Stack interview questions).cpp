#include<iostream>
#include<stack>
using namespace std;

//reverse string using stack

int main(){
    string str="Rushikesh";
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        st.push(ch);
    }
    string ans=" ";
    while(!st.empty()){
        char ch=st.top();
        ans.push_back(ch);

        st.pop();
    }
    cout<<"Reverse string is:"<<ans<<endl;
  
    return 0;
}

//Delete middle element from stack

void solve(stack<int>inputstack,int count,int size){
    //base case
    if(count==size/2){
        inputstack.pop();
        return ;
    }

    int num=inputstack.top();
    inputstack.pop();

    solve(inputstack,count+1,size);

    inputstack.push(num);
}
void DeleteMid(stack<int>inputstack,int n){
    int count=0;
    solve(inputstack,count,n);
}

//Valid parenthesis or not using stack

class Solution {
public:
    bool isValid(string s) {
            stack<char>st;
            for(int i=0;i<s.length();i++){
                char ch=s[i];
                if(ch=='(' || ch=='{' || ch=='['){
                    st.push(ch);
                }
                else{
                    if(!st.empty()){
                        char top=st.top();
                        if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
                            st.pop();
                        }
                        else{
                            return false;
                        }
                    }
                    else{
                        return false;
                    }
                }
            }
            if(st.empty()){
                return true;
            }
            else{
                return false;
            }
       }
};

// add element in bottom of the stack

void solve(stack<int>&s,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return ;
    }

    int num=s.top();
    s.pop();

    solve(s,x);

    s.push(num);
}
int main(){
    stack<int>myStack;
    int x;
    solve(myStack,x);
    return myStack;
}

//Reverse stack using recursion call

void bottom(stack<int>&s,int element){
    //base case
    if(s.empty()){
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();

    bottom(s,element);

    s.push(num);
}
void reverseStack(stack<int> &stack) {
        //base case
        if(stack.empty()){
            return ;
        }

        int num=stack.top();
        stack.pop();

        reverseStack(stack);

        bottom(stack,num);
}

//Sort a stack

#include <bits/stdc++.h> 
void sortedInsert(stack<int>&stack,int num){
	//base case
	if(stack.empty()||stack.top()<num){
		stack.push(num);
		return;
	}

	int n=stack.top();
	stack.pop();

	sortedInsert(stack,num);

	stack.push(n);
}
void sortStack(stack<int> &stack)
{
	//base case
	if(stack.empty()){
		return ;
	}

	int num=stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack,num);
}

//find a redundent in stack string 

#include<stack>

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        char ch =s[i];
        
        if(ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else
        {
            
            if(ch == ')') {
                bool isRedundant = true;
                
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' ||top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }
                
                if(isRedundant == true)
                    return true;
                st.pop();
            }
            
        } 
    }
    return false;
}

//Minumum cost to reversal and make a valid expression 

#include<stack>
int findMinimumCost(string str) {
  	
    //odd condition
    if(str.length()%2 == 1) {
        return -1;
    }
    
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        
        if(ch == '{') 
            s.push(ch);
		else
        {
            //ch is closed brace
            if(!s.empty() && s.top() == '{') {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    
        //stack contains invalid expression
        int a = 0, b = 0;
        while(!s.empty()) {
            if(s.top() == '{') {
                b++;
            }
            else
            {
                a++;
            }
            s.pop();
        }
        
		int ans = (a+1)/2 + (b+1)/2;
        return ans;
    
    
}