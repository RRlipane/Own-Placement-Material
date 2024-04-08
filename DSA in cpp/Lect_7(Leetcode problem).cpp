#include<iostream>
#include<math.h>
#define INT_MIN
#define INT_MAX
using namespace std;

//Reverse Integer
/*
int main(){
    int n,rem=0,rev=0;
    cout<<"Enter number:"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        if( rev>INT_MAX/10 || rev<INT_MIN/10){
            return 0;
        }
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<rev;
}



//Complement of base 10

int main(){
        int n;
        cin>>n;
        int m=n;
        int mask=0;
        if(n==0)
            return 1;
        while(m!=0){
            mask=(mask << 1) | 1;
            m= m >> 1;
        }
        int ans=(~n)&mask;
        cout<<ans;
}


//power of 2
int boolispow(int n){
    int ans=0;
    for(int i=0;i<=30;i++){
        ans=pow(2,i);
        if(ans==n){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<boolispow(n);
    return 0;
}

or

int boolispow(int n){
    if(n<=0){
        return false;
    }
    while(n%2==0){
        n=n/2;
    }
    return n==1;
}
*/



