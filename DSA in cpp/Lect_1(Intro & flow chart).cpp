//Find odd number upton n
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;
    int i;
    for(i=2;i<=num;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
    return 0;
}


//Find sum of number upto n

int main(){
    int a,n;
    cout<<"Enter num:"<<endl;
    cin>>a>>n;
    int i,sum=0;
    for(i=a;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}

//Find prime number upto n

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i%2!=0){
            cout<<"prime"<<i<<endl;
        }
        else{
            continue;
        }
    }
    return 0;
}
