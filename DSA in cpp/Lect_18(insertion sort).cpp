#include<iostream>
using namespace std;
//Insertion sort
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for( ;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,5);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}