#include<iostream>
using namespace std;
/*
int main(){
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<n-j+1;
        }
         cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
         i++; 
 }

}



int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<i;
        }
        cout<<endl;
    }
    return 0;
}



int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int val=i;
        while(j<=i){
            cout<<val;
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
}



int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
          char   ch='A'+ i - 1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch=i-1+'D';
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
*/

int main()
{
   int n;
   cout<<"Enter num:"<<endl;
   cin>>n;
   int i=1;
   while(i<=n){
        int space=n-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0; 
}


