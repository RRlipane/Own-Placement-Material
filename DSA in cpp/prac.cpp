#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//check if a string is anagfram or not
/*
int main(){
    string str1,str2;
    cin>>str1>>str2;

    if(str1.length()!=str2.length()){
        cout<<"not anagram"<<endl;
    }
    
    cout<<"anagram"<<endl;

    return 0;
}


// two array same or not
int same(int arr1[],int arr2[],int n){
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int arr1[100],arr2[100];

    for(int i=0;i<n;i++){
            cin>>arr1[i];
    }

    for(int i=0;i<n;i++){
            cin>>arr2[i];
    }

    cout<<same(arr1,arr2,n);

}


int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
            cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<"odd"<<endl;
            break;
        }
        if(arr[i]%2==0 && arr[i+1]%2!=0){
            cout<<"mixed type"<<endl;
            break;
        }
        else{
            cout<<"even"<<endl;
            break;
        }
    }
    return 0;
}


//Calculate how many odd and even number in array
int main(){
    int arr[4]={1,3,4,5};
           int k=0,c=0;
    for(int i=0;i<4;i++){
        if(arr[i]%2!=0){
            k++;
        }
        else{
           c++;
        }
    }
    cout<<c<<endl;
    cout<<k<<endl;
    
    return 0;
}


// max and min element from array
int main(){
     int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
            cin>>arr[i];
    }

    int max=arr[0];
    int min=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}
*/

//Sum of element in array
int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;

    int arr[100];

    cout<<"Enter array of element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
            sum=sum+arr[i];
    }

    cout<<"Sum of array is:"<<sum<<endl;

    return 0;
}