#include<stdio.h>
/*
int main(){
    //array 
    int arr_arr1[]={1,2,3,4,5};
    printf("array element are\n");
    //traversing element of array 
    for(int i=0;i<=5;i++){
        printf("%d",arr_arr1[i]);
    }

    arr_arr1[2]=5;
    printf("\nupdate element of array\n");
    for(int i=0;i<=5;i++){
        printf("%d",arr_arr1[i]);
    }


    return 0;
}




// two or multidimention array

int main(){
    int arr[2][3]={1,2,3,4,5,6};

    //print the element
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// C Program to illustrate the 3d array
#include <stdio.h>

int main()
{

	// 3D array declaration
	int arr[2][2][2] = { 10, 20, 30, 40, 50, 60 };

	// printing elements
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n \n");
	}
	return 0;
}



//pass array to function

void printarray(int arr[],int n){
    printf("elements of array are\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[100]={2,3,4,5,6,7};
    printarray(arr,6);
    return 0;
}




int* func(){
    int static arr[]={1,2,3,4,5};
    return arr;
}
int main(){
    int *ptr=func();
    printf("element of array are:\n");
    for(int i=0;i<5;i++){
        printf("%d",*ptr++);
    }
    return 0;
}


int main(){
    int arr[]={1,2,3,4,5,6};
    printf("size of array is:%d",sizeof(arr));
    return 0;
}


void fun(int arr[], unsigned int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
// Driver program
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    fun(arr, n);
    return 0;
}
*/

