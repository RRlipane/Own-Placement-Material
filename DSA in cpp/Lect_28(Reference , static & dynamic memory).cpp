#include<iostream>
using namespace std;

/*
//Pass by reference same memory is there just different name called by it so chages may affected in both
void update1(int& n){
    n++;
}

//Pass by value so there is no update in variable because different memory is created
void update(int n){
    n++;
}

int main(){
    int n=5;

    //Reference variable

    int &j=n;

    /*
    cout<<n<<endl;
    n++;
    cout<<n<<endl;
    j++;
    cout<<n<<endl;

   cout<<n<<endl;
   update1(n);
   cout<<n<<endl;


}
*/

//Dynamic memory allocation

int main(){
    char ch='a';
    cout<<sizeof(ch)<<endl;

    char* c= &ch;
    cout<<sizeof(c)<<endl;

    //variable size array
    int *arr=new int[5];

}
