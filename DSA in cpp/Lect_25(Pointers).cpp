#include<iostream>
using namespace std;
int main(){
/*
    int i=5;
    cout<<i<<endl;

    int d=6;
    int *p=&d;
    cout<<*p++<<endl;

    int *f=&d;

    cout<<*f<<endl;

    //No increament in a because it has a seprate meaning
    int num=5;
    int a=num;
    a++;
    cout<<"values are"<<endl;
    cout<<a<<endl;
    cout<<num<<endl;
*/

    //double pointer and point to another pointer
    int n=10;
    int *num=&n;
    int **ptr=&num;
    cout<<(**ptr)++<<endl;
    cout<<**ptr<<endl;
    cout<<ptr<<endl;

}