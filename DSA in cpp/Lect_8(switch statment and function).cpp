#include<iostream>
using namespace std;
//Simple calculator
int main(){
    int a,b;
    int op;
    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;

    cout<<"Enter operation:"<<endl;
    cin>>op;
   switch(op){
        case 1:
            cout<<a+b<<endl;
            break;
        case 2:
            cout<<a-b<<endl;
            break;
        case 3:
            cout<<a*b<<endl;
            break;
        case 4:
            cout<<a/b<<endl;
            break;
        default:cout<<"NO one condition is matched"<<endl;
    }
    return 0;
}


//how many required note to fulfill amount
int main(){
    int amount,note=0;
    cout<<"Enter amount:"<<endl;
    cin>>amount;
    int n1;
    cin>>n1;
    switch (n1)
    {
        case 1:
            note=amount/100;
            amount=(amount-100*note);
            cout<<note<<"required for amount"<<endl;
            break;
        case 2:
            note=amount/50;
            amount=(amount-50*note);
            cout<<note<<"required for amount"<<endl;
            break;
        case 3:
            note=amount/20;
            amount=(amount-20*note);
            cout<<note<<"required for amount"<<endl;
            break;
        case 4:
            note=amount/10;
            amount=(amount-10*note);
            cout<<note<<"required for amount"<<endl;
            break;
        default:cout<<"not match"<<endl;
}
return 0;
}




int power1(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int c,d;
    int a=c,b=d;
    cin>>a>>b;
    cout<<power1(a,b);
    return 0;
}



//nCr=n!/r!*(n-r)!

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    int ans=num/deno;
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter n and r:"<<endl;
    cin>>n>>r;
    cout<<nCr(n,r);
    return 0;
}



//print counting

void printcount(int n){
    int num1=n;
    cout<<num1<<endl;
    int count=0;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
        ++count;
    }
    cout<<"Total counting are:"<<endl;
    cout<<count<<endl;
}

int main(){
    int n;
    cin>>n;
    printcount(n);
    return 0;
}



//prime or not using function

bool is_prime(int n){
    int i=2;
    if(n%i==0){
        return 0;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    cout<<is_prime(n);
    return 0;
}



//Arithematic progression

int Ap(int n){
    return (3*n+7);
}
int main(){
    int n;
    cin>>n;
    cout<<Ap(n);
    return 0;
}


//Fibonacci series
int fibonacci(int n){
    int n1=0,n2=1,n3,ans;
    for(int i=2;i<=n;i++){
    n3=n1+n2;
    ans=n3;
    cout<<ans<<" ";
    n1=n2;
    n2=n3;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int n1=0,n2=1;
    cout<<n1<<" "<<n2<<" ";
    fibonacci(n);
}

