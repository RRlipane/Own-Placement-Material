#include<iostream>
using namespace std;

//Initialize an array

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
        arr[i]=3;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
   }
   return 0;
}


//pass array to function

void passarray(int arr[],int size){
     cout<<"pass array to function"<<endl;
     for(int i=0;i<size;i++){
        arr[i]=1;
     }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     return ;
}

int main(){
    int arr[10]={1};
    passarray(arr,10);
    return 0;
}



int getmin(int arr[],int size){
    int min= INT_FAST8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min= arr[i];
        }
    }
    return min;
}

int main(){
   int n;
   cin>>n;

   int arr[100];

   for(int i=0;i<n;i++){
        cin>>arr[i];
   }

   cout<<getmin(arr,n);

}



int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i+1]){
            max=arr[i+1];
       }
    }
    cout<<max;
}


int sumarr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumarr(arr,n);
    return 0;
}


//Linear search 

int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int search;
    cout<<"Enter which number you want to search:"<<endl;
    cin>>search;
    
    for(int i=0;i<n;i++){
        if(search==arr[i]){
            cout<<"found"<<" "<<arr[i]<<"index are"<<i<<endl;
            break;
        }
    }
    cout<<"not present in array elements"<<endl;
    return 0;
}


//Reverse array


void reverse1(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    reverse1(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


int search1(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter size:"<<endl;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"search elements:"<<endl;
    cin>>key;

    int size=sizeof(arr)/sizeof(int);

    cout<<search1(arr,size,key);

    return 0;
}



