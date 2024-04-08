#include<iostream>
using namespace std;
//Object Oriented Programming 

/*
class Hero{
    private:
        int health;
    public:
        char level;

        void print(){
            cout<<level<<endl;
        }
        int  gethealth(){
            return health;
        }

        char getlevel(){
            return level;
        }

        void sethealth(int h){
            health=h;
        }

        void setlevel(char l){
            level=l;
        }
};

int main(){
    Hero rushi;
    rushi.sethealth(10);
    rushi.setlevel('A');
    cout<<"a is:"<<rushi.gethealth()<<endl;
    cout<"var is:"<<rushi.getlevel()<<endl;
    h.a=10;
    rushi.b = 20;
    rushi.level = 'A';
    cout<<"a is:"<<h.a<<endl;
    cout<<"b is:"<<rushi.b<<endl;
    cout<<"char is:"<<rushi.level<<endl;



    //Dynamically create object 
    int *b=new b;
    cout<<(*b).health()<<endl;
    cout<<b-->.health()<<endl;
    
}
*/

//Constructor="initialize object constructor is called"
//default constructor no value is passed to function
/*
class Hero{
    public:
        Hero(){
            cout<<"Hello Rushikesh"<<endl;
        }
};

int main(){
    Hero H;
    //Output:Hello Rushikesh
}


//Parameter constructer 
//In parameter if name of input and output is same then we used this pointer to store address of current object

int main(){
    Hero S(10,'A');
    S.print();
 
   //Copy constructor copy of object data S to R and both have same output if we print
    Hero R(S);
    R.print();
}



//Static keyword = Static keyword are such type of data member that belongs to class and to access data member there is no need to create object 

class Hero{
    public:
        static int keyword;
};

int Hero::keyword=5; //:: Scoper resolution operator 

int main(){
    cout<<Hero::keyword<<endl;
    Hero h1;
    cout<<h1.keyword<<endl;
}


//Static function = static function are same as static keyword but there is no used of this pointer because object are not used 
//Static function are only access a static member no another member is access

class Hero{
    public:
        static int time;

        void health(){
            cout<<"hello"<<endl;
        }
};

int Hero::time=10;

int main(){
    cout<<Hero::time<<endl;
}
*/