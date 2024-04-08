#include<iostream>
using namespace std;

/*
bool sorted(int *arr,int n){
    //base case 
    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool rem=sorted(arr+1,n-1);
        return rem;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};

    bool ans=sorted(arr,5);

    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}


//sum of array using recursion

int getsum(int *arr,int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int rem=getsum(arr+1,n-1);
    int sum=arr[0]+rem;
    return sum;
}

int main(){
    int arr[4]={1,3,2,4};

    int sum1=getsum(arr,4);

    cout<<"Sum of array element is:"<<sum1<<endl;

    return 0;
}


//Linear Search using recursion

bool Linear_search(int *arr,int n,int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    int rem=Linear_search(arr+1,n-1,k);
    return rem;
}

int main(){
    int arr[5]={2,3,4,2,5};

    bool ans=Linear_search(arr,5,8);

    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    return 0;
}



//Binary search find element using recursion

bool Binary_Search(int *arr,int s,int e,int k){
        if(s>e){
            return false;
        }
         int mid=s+(e-s)/2;
        if(arr[mid]==k){
            return true;
        }

        if(arr[mid]<k){
            return Binary_Search(arr,mid+1,e,k);
        }
        else{
            return Binary_Search(arr,s,mid-1,k);
        }
}

int main(){
    int arr[6]={2,3,4,5,6,7};
    int s=0;
    int e=5;

    bool ans=Binary_Search(arr,0,5,11);

    cout<<ans<<endl;

    return 0;

}
*/