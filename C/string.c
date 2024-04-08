#include<stdio.h>
#include<string.h>
int main(){
    //to get a space string also 
    /*
   char str[50];
    fgets(str,50,stdin);
    printf("The string is");
    puts(str);
    return 0;
   

   char str[50];

   scanf("%s",str);
   int len=strlen(str);
   printf("The length of string is:%d",len);
   printf("The string is:%s",str);

     */

    //pointer in string
    char str[50]="Rushi";
    char* ptr=str;
    if(ptr==str){
        printf("equal");
    }
    else{
        printf("not");
    }
    return 0;
}