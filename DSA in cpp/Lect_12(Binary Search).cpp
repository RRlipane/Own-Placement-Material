#include<iostream>
using namespace std;

//Binary Search

int BinarySearch(int arr[],int n,int key){
    int i=0;
    int j=n-1;

    int mid=i+(j-i)/2;

    while(i<=j){
        if(arr[mid]==key){
            return mid;
        }
        if(key > mid){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
        mid=i+(j-i)/2;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of arr:"<<endl;
    cin>>n;

    int key;
    cout<<"Enter key"<<endl;
    cin>>key;

    int arr[100];

    cout<<"Enter elements of arr:"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<BinarySearch(arr,n,key);

    return 0;
}

