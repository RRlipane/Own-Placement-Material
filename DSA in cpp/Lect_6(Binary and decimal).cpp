#include<iostream>
#include<math.h>
using namespace std;
//decimal to binary

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){

        int bit = n&1;

        ans=( bit * pow(10,i) ) + ans ;

        n =n>>1;

        i++;
    }
    cout<<ans;
}


//binary to decimal
int main(){
    int n;
    int i=0,ans=0;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        if(rem==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}


