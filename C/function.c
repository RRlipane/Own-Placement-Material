#include<stdio.h>
#include<math.h>//build in function library
//function
/*
int sum(int a, int b){
    return a+b;
}
int main(){
    int a=10,b=20;
    printf("The sum is:%d",sum(a,b));
    return 0;
}



//two types of function 1)built iin 2)used defined;

int main(){
    int a=49;
    int square=sqrt(a);
    printf("the square of a is:%d",square);
    return 0;
}

pass by value=changes not reflect
pass by reference=changes may reflect point to a actual paramenter



void main(){
    printf("hello");
}
*/

int fun(int c){
    return c;
}
int main(void){
    int c=10;
    printf("value is:%d",fun(c));
}

