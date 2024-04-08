#include<iostream>
using namespace std;

/*
//Find first and last index of array
int leftmost1(int arr[],int n,int key){
    int i=0;
    int j=n-1;

    int mid=i+(j-i)/2;

    int ans=-1;

  while(i<=j){

    if(arr[mid]==key){
       ans=mid;
       j=mid-1;
    }
    else if( key < arr[mid]){
        i=mid+1;
    }
    else if(key > arr[mid]){
        j=mid-1;
    }
    mid=i+(j-i)/2;
  }
  return ans;
}

int rightmost(int arr[],int n,int key){
    int i=0;
    int j=n-1;

    int mid=i+(j-i)/2;

    int ans=-1;

  while(i<=j){

    if(arr[mid]==key){
       ans=mid;
       i=mid+1;
    }
    else if( key < arr[mid]){
        i=mid+1;
    }
    else if(key > arr[mid]){
        j=mid-1;
    }
    mid=i+(j-i)/2;
  }
  return ans;
}

int main(){
    int n;
    cin>>n;

    int key;
    cin>>key;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<leftmost1(arr,n,key);
    cout<<rightmost(arr,n,key);

}


//find peak index of array

int Peakindex(int arr[],int n){
    int i=0,j=n-1;
    int mid=i+(j-i)/2;
    while(i<j){
        if(arr[mid]<arr[mid+1]){
            i=mid+1;
        }
        else{
            j=mid;
        }
        mid=i+(j-i)/2;
    }
    return i;
}


int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<<Peakindex(arr,n);


}


//find Pivot element in an array means small element

int Pivotel(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}


int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<<Pivotel(arr,n);
}

*/
