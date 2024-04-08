#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    char arr[100];
    cin>>arr;

    int len=strlen(arr);

    int i=0;
    int j=len-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<arr;

}