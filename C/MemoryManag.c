#include<stdio.h>
#include<stdlib.h>
/*
int main(){
    //Memory managment in c
    //typical memory representation in c are
    
        1)text segment
        2)Heap  --dynamically working 
        3)Stack --once a storage is  declared we cannot change the storage
        4)initialized data
        5)uninitialized data
    
    
    //DMA(Dynamic memory allocation) to change a memory of data structure at runtime
    //the stdlib.h library provide a 4 files

    1)malloc():
            memory allocation and in this memory is not allocation at execution time so by default have garbage value
        syntax:
            ptr=(cast-type)malloc(byte-size)
        ex:
            int* ptr=(int*)malloc(sizeof(int));
            //output is:20 byte is allocate


    2)calloc():
            calloc is contigous memory allocation it is same as malloc() but it has two difference are 
            it is initialized with 0 by default , and it has two parameter as compare to malloc()

        syntax:
            ptr=(int*)calloc(byte-size);

        ex:
            int* ptr=(int*)calloc(5*sizeof(int));

    

    3)realloc():
            reallocation of memory is previous memory is insufficient then by using realloc new memory is 
            allocated to it

        syntax:
            ptr=realloc(ptr,sizeof(int));

        ex:
            int* ptr=(int*)malloc(5*sizeof(int)); //previousley
            ptr1=realloc(ptr,10*sizeof(int));     //newly allocation

    4)free():
            If memory is allocated using malloc and calloc it is not free for them or automatically 
            manually it is free. free of memory release of wastege of memeory elements

        syntax:
            free(ptr);
        
        ex:
            int* ptr=(int*)calloc(5*sizeof(int));  //allocation memory

            free(ptr);   //free memory
}

    //Memory Leak: when we created a memory in heap and we forget to free it then the memory leakage is happen

    ex:

        int main(){
            int *ptr=(int*)malloc(sizeof(int));
            --return without free of pointer or free of memory 
            return ;
        }

//Dynamic memory allocation

int main(){
    int* ptr;
    int n,i;

    // n=5  calloc function it is initialized
    
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter all the elements:%d",n);

    //malloc() using allocation of dynamic memory
    ptr=(int*)malloc(n*sizeof(int));

    //check base case
    if(ptr==NULL){
        printf("pointer is null");
        exit(0);
    } 
    else{
        printf("memory is succesfully added:");
        
        for(i=0;i<n;++i){
            ptr[i]=i+1;
        }

        for(int i=0;i<n;++i){
            printf("%d",ptr[i]);
        }
 
   }
   return 0;
}
*/