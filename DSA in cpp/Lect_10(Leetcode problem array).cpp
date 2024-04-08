#include<iostream>
using namespace std;

//Swap alternate elements of array
/*
void SwapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(arr[i] < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    SwapAlternate(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}



//Find unique element of array

int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<unique(arr,n);

    return 0;
}




//Find duplicate element in array

int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<duplicate(arr,n);
}

*/

//Intersection of array elements

int Intersection(int arr1[],int arr2[],int n,int m){
    int ans=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter size of arr1 and arr2"<<endl;
    cin>>n,m;

    int arr1[100];
      int arr2[100];
    cout<<"Enter element of arr1"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter element of arr2"<<endl;
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }

    cout<<Intersection(arr1,arr2,n,m);

}

/*

//pair sum array

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {

     vector< vector<int> > ans;

      for(int i=0;i<arr.size();i++){
         for(int j=i+1;j<arr.size();j++){
               if(arr[i]+arr[j]==s){
                     vector<int> temp;
                     temp.push_back(min(arr[i],arr[j]));
                     temp.push_back(max(arr[i],arr[j]));
                     ans.push_back(temp);
               }
         }
      }
      sort(ans.begin(),ans.end());
      return ans;
}



// triplet sum of array
bool triplet(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k] == val){
                    cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int val;
    cin>>val;

    int arr[100];

    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    
    cout<<triplet(arr,n,val);

   
    return 0;
}


// sort 0,1
void Sort(int arr[],int n){
    int i=0,j=n-1;
    while(i < j ){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
     }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

*/






