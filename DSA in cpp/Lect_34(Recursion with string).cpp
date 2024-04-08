#include<iostream>
#include<string>
using namespace std;

/*
//reverse string by using recursion
void reverse(string& str,int i,int j){
    if(i>j){
        return ;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

int main(){
    string str="Rushi";

    reverse(str,0,str.length()-1);

    cout<<str<<endl;
    
}


//Check is palindrome or not by using recursion

bool is_palin(string str,int i,int j){
    if(i>j)
        return true;

    if(str[i]!=str[j])
        return false;
    else{
        return is_palin(str,i+1,j-1);
    }
}

int main(){
    string str="nxtin";

    bool ans=is_palin(str,0,str.length()-1);

    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}



//calculate power using recursion and make optimize solution

int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<power(a,b)<<endl;

    return 0;
}



//Bubble sort by using recursion

void Bubble_sorted(int *arr,int n){
    if(n==0 || n==1){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    return Bubble_sorted(arr,n-1);
}

int main(){
    int arr[5]={2,4,1,5,6};

    Bubble_sorted(arr,5);

    for(int i=0;i<5;i++){
            cout<<arr[i]<<endl;
    }
    return 0;
}
*/