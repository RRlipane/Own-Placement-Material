#include<iostream>
using namespace std;
/*
int main(){
    int a,b;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;

    cout<<"a&b"<<(a&b)<<endl;
    cout<<"a|b"<<(a|b)<<endl;
    cout<<"~a"<<~a<<endl;
    cout<<"a^b"<<(a^b)<<endl;

    return 0;
}


//Left shift and right shift 

int main(){
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
}


//For  loop (preincreament and postincreament)

int main(){
    int i=7;

    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;

}


// for loop 1 to n sum
int main(){
    int n,sum=0;
    cout<<"Enter number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}


//Fibonacci number
int main(){
    int n,next;
    cin>>n;
    int t1=0,t2=1;
    cout<<t1<<" "<<t2<<" ";
    for(int i=1;i<=n;i++){
        next=t1+t2;
        cout<<next<<" ";
        t1=t2;
        t2=next;
    }
    return 0;
}
*/

int main(){
    int n,count=0;
    cout<<"Enter number:"<<endl;
    cin>>n;
    while(n!=0){
        n=n/10;
        if(n!=0){
            ++count;
        }
    }
    cout<<count<<endl;
}