#include<stdio.h>
/*
int main(){

    //pointer are used to store the memory address of the variable 

    /*
    int val=10;
    int *ptr=&val;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);


    printf("The size of pointer is:%d",sizeof(ptr));
    return 0;
    

   int arr[5]={1,2,3,4,5};
   int *ptr=arr;
   for(int i=0;i<5;i++){
    printf("%d",*ptr++);
   }
   return 0;

  

  //operation on pointer
  int a=6;
  int *ptr=&a;
  printf("%p\n",ptr);
  ptr++;
  printf("%p\n",ptr);
  ptr--;
  printf("%p\n",ptr);
  ptr++;
}


void Swap(int *a,int *b){
    int c;
    int *temp=&c;
    *temp=*a;
    *a=*b;
    *b=*temp;
}
int main(){
    int a=10,b=20;
    printf("\n\nThe value of a and b is\n\n:%d%d",a,b);
    Swap(&a,&b);
    printf("\n\nThe value of a and b is\n\n:%d%d",a,b);
}




//double pointer - pointer to pointer
int main(){
    int val=5;
    int* p=&val;
    int** ptr=&p;

    printf("%d\n",val);
    printf("%d\n",&p);
    printf("%d\n",&ptr);

}



int add(int a,int b){
    return a+b;
}
int main(){
    int (*add_ptr)(int,int)=&add;
    int result=add_ptr(5,6);
    printf("Result is:%d",result);
}
 */