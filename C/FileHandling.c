#include<stdio.h>
#include<stdlib.h>
    /*
        File handling different type of operation to be performed create , open ,write, close
        operating modes are r,w,r+,rb,wb,wb+,rb+,ab

    */
int main(){
   FILE* fptr;
   fptr=fopen("Rushikesh.txt","r");
   if(fptr==NULL){
    printf("File is not opened succesfully");
    exit(0);
   }
   fclose(fptr);
   return 0;
}