#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

/*

//toggle character of string

int main(){
  string str;
  cin>>str;

    for(int i=0;i<str.length();i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
        else{
            str[i]=toupper(str[i]);
        }
    }
    cout<<str; 
}




//remove vowel from string

int main(){
    string str;
    cin>>str;

    string str1;

    for(char c:str){
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u'&& c!='A' && c!='E' && c!='I' && c!='O' && c!='U'){
                str1+=c;
        }
    }
    cout<<str1;
}


//check palindrome or not
int main(){
    string str;
    cin>>str;

    string str1=str;

    reverse(str.begin(),str.end());
    

    if(str==str1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}

// Another approch for reverse string and check palindrom or not 

int main(){
    string str;
    cin>>str;

    string str1=str;

    int len=str.length();

    for(int i=0,j=len-1;i<j;i++,j--){
          char temp=str[i];
          str[i]=str[j];
          str[j]=temp;
    }
    cout<<str<<endl;
    if(str==str1){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}


// remove algebric parenthesis from string
int main(){
    string str;
    cin>>str;

    string str1;
    
    for(char c:str){
        if(c!='(' && c!=')'){
                str1+=c;
        }
    }
    cout<<str1;
}


//digit sum in a string
int main(){
    string str;
    cin>>str;

    int sum=0;

    for(char c:str){
        if(isdigit(c)){
               sum=sum+c-'0';
        }
    }
    cout<<sum;
}



// calculate pow 
 double Power(double x, int n) {
        return pow(x,n);
}

int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    cout<<Power(x,n);

}



int main() 
{
 char str[20];
 int length = 0;
 cout<<"Enter a string: ";
 cin>>str;
 length = strlen(str);
 for(int i=0;i<length;i++)
 {
 if(islower(i==0||i==(length-1)))
 {
 str[i]=toupper(str[i]);
 }
 else if(str[i]==' ') 

 {
 str[i-1]=toupper(str[i-1]);
 str[i+1]=toupper(str[i+1]);
 }
 else{
    str[i]=tolower(str[i])
 }
 }
 cout<<"After conversion of first and last letter to uppercase: "<<str;
 return 0;
}


//Frequency of character repeated of word charcater in string

int main(){
    char str[100];
    cout<<"Enter string:"<<endl;
    cin>>str;

    int len=strlen(str);


    for(int i=0;i<len;i++){
         int count=1;
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j])
            count++;
        }
        cout<<"freq is "<<str[i]<<" is "<<count<<endl;
    }
    return 0;
}



int main(){
   string str1;
   cin>>str1;
   string str2;
   cin>>str2;
   
   int l1=str1.length();
   int l2=str2.length();

    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());

    for(int i=0;i<str1.length();i++){
            if(str1[i]!=str2[i]){
                cout<<"not anagram"<<endl;
    
            }
    }

    cout<<"anagram"<<endl;

    return 0;
}


void arrrev(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    arrrev(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}



int main(){
    char str[100];
    cout<<"Enter string:"<<endl;
    cin>>str;

    int len=strlen(str);

    int i,count;
    for(i=0;i<len;i++){
         count=1;
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j])
            count++;
        }
    }
     cout<<str[i]<<count;
    return 0;
}



//Two pointer approach reverse string

void reverse_string(string& str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        char tem=str[i];
        str[i]=str[j];
        str[j]=tem;
    i++;
    j--;
    }
}

int main(){

    string str="Rushi";

    reverse_string(str);

    cout<<str<<endl;

}


void sort_array(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
        }
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    sort_array(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

}


//maximum from subarray

int maxsumarray(int *arr,int n){
    int result=arr[0];

    for(int i=0;i<n;i++){
        int mul=arr[i];
        for(int j=i+1;j<n;j++){
            result=max(result,mul);
            mul=mul*arr[j];
        }
        result=max(result,mul);
    }
    return result;
}

int main(){
    int arr[5]={1,5,-7,5,3};
    cout<<maxsumarray(arr,5);
}


//Element are disjoint or not (if any one element is same means not disjoint otherwised disjoint)
bool Arrayelement(int *arr1,int n,int *arr2,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int arr1[3]={1,5,-6};
    int arr2[4]={2,4,6,8};
   bool ans= Arrayelement(arr1,5,arr2,4);
   if(ans){
    cout<<"disjoint"<<endl;
   }
   else{
    cout<<"not disjoint"<<endl;
   }
   return 0;
}


//sum of array 
int main(){
    int n,m;
    cout<<"Enter two size array:"<<endl;
    cin>>n>>m;
    int arr1[100];
    int arr2[100];
    cout<<"Enter element of array1:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(arr1[i]*arr2[i]);
    }
    cout<<sum<<endl;

}


//Accenture questions rat food
int calculate (int r, int unit, int n, int *arr)
{
  if (n == 0)
    return -1;
  int totalFoodRequired = r * unit;
  int foodTillNow = 0;
  int house = 0;
  for (house = 0; house < n; ++house)
    {
      foodTillNow += arr[house];
      if (foodTillNow >= totalFoodRequired)
	{
	  break;
	}
    }
  if (totalFoodRequired > foodTillNow)
    return 0;
  return house + 1;
}

int main(){
   int r;
   cin>>r;
   int unit;
   cin>>unit;
   int n;
   cin>>n;
   int arr[100];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<calculate(r,unit,n,arr);
}


//Max product of subarray
int  maxproduct(int arr[],int n){
    int result=arr[0];
    for(int i=0;i<n;++i){
        int mul=arr[i];
        for(int j=i+1;j<n;++j){
            result=max(result,mul);
            mul=mul*arr[j];
        }
        return max(result,mul);
    }
}

int main(){
    int arr[5]={2,3,-1,-2,4};
    cout<<maxproduct(arr,5);

}


int scalarproduct(int arr1[],int arr2[],int n){
    int sum,mul;
    for(int i=1;i<n;i++){
        sum=0;
        for(int j=1;j<n;j++){
            mul=arr1[n-i]*arr2[n-j];
             sum=sum+mul;
        }
    }
    return sum;
}
int main(){
    int arr1[4]={1,2,3,4};
    int arr2[4]={5,6,7,8};
    cout<<scalarproduct(arr1,arr2,4);
}
*/
