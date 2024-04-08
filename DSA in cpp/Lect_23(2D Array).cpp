#include<iostream>
using namespace std;

//2D array input and output 
/*
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];

    cout<<"Take input from user"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Display output"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

*/

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Take input from user"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Display output"<<endl;
    for(int i=0;i<m;i++){
          int sum=0;
        for(int j=0;j<n;j++){
           sum+=arr[i][j];
        }
        cout<<"sum is:"<<sum<<" ";
        cout<<endl;
    }
}
