#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"a and b is equal"<<endl;
    }
    else{
        if(a>b){
            cout<<"a i greater than b"<<endl;
        }
        else{
            cout<<"b is big"<<endl;
        }
    }
    return 0;
}


//Code for practice 
int main(){
    char ch;
    cout<<"Enter character:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else{
        cout<<"it is number"<<endl;
    }
    return 0;
}



//Loops (while,for,do-while)

int main(){
    int n;
    cout<<"Num:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
            cout<<i<<endl;
            i++;
    }
    return 0;
}


int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int sum=0;
    int i=2;
    while(i<=n){
        if(i%2==0){
        sum=sum+i;
        }
        i++;
    }
    cout<<sum<<endl;
    return 0;
}


//farenhite to celcius conversion

int main(){
    double f;
    cin>>f;
    int fah;
        fah=(f-32)*5/9;
    cout<<fah<<endl;
}

