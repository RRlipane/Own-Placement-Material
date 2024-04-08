#include<iostream>
using namespace std;

//Encapsulation = wrapping of data member and function 
//why used = information hiding and data hiding 
//Fully Encapsulated = all data member are to be private
/*
class student{
    private:
        string name;
        int age;
    public:
        int getage(){
            return this->age;
        }
};
int main(){
    student s1;
    cout<<"Hi hello"<<endl;  
}


//Inheritance = child class behave some properties and behaviour of parent class 
// parent class =base class and child class = derived class

//Parent class
class parent{
    public:
        int age;
        string name;
    
    int getage(){
        return this->age;
    }
    void setage(int s){
        this->age=s;
    }
    void sleep(){
        cout<<"2 hours sleep"<<endl;
    }
};

//Child class

class student: public parent{
    public:
        string name1;

        void name(){
            cout<<"Rushikesh Lipane"<<endl;
        }
};

int main(){
    student s;
    cout<<s.age<<endl;
    s.sleep();

    s.setage(10);
    cout<<s.age<<endl;
    s.name();
}


//Types of inheritance 

// 1)Single Inheritance

class Animal{
    public:
     int age;
     string name;

};

class dog:public Animal{  // single inheritance 
    public:
    string name1;

    void speak(){
        cout<<"bark"<<endl;
    }
};

int main(){
    dog d;
    d.speak();
}



//Multilevel inheitance 


class Animal{
    public:
     int age;
     string name;

};

class dog:public Animal{  
    public:
    string name1;

    void speak(){
        cout<<"bark"<<endl;
    }
};

class dog1:public dog{  
    public:
    string name2;

    void speak1(){
        cout<<"bark like dog"<<endl;
    }
};
int main(){
    dog1 d1;
    d1.speak();
    d1.speak1();

}



//Multiple inheritance

class Animal{
    public:
     int age;
     string name;
    
    void speak1(){
        cout<<"barking"<<endl;
    }

};

class Animal2{  
    public:
    string name1;

    void speak(){
        cout<<"bark"<<endl;
    }
};

class dog1:public Animal,public Animal2{  
    public:
    string name2;

    void speak3(){
        cout<<"bark like dog"<<endl;
    }
};
int main(){
    dog1 d1;
    d1.speak();
    d1.speak3();
    d1.speak1();

}


//Hirachichal inheritance
class Animal{  
    public:
    string name1;

    void speak(){
        cout<<"bark"<<endl;
    }
};

class dog1:public Animal{  
    public:
    string name2;

    void speak3(){
        cout<<"bark like dog"<<endl;
    }
};

class dog2:public Animal{  
    public:
    string name3;

    void speak4(){
        cout<<"bark like dog"<<endl;
    }
};

int main(){
    dog2 d1;
    d1.speak();
    d1.speak4();

}


//Hybrid inheritance 

// Inhritane Ambiguity = two base class have same function name and third derived class behave  of them at time of accesing object not know which base class is access
// so ambiguity occour

// Solution = to solve ambigity :: (Scope resolution operator are used )

class A{
    public:
        void func(){
            cout<<"My name is A"<<endl;
        }
};

class B{
    public:
     void func(){
        cout<<"my name is B"<<endl;
     }
};

class C:public A , public B{

};

int main(){
    C obj;
    //obj.func(); error occour
    obj.A::func();
    obj.B::func();
}


//Polymorphisum = "existing in many forms"

// Two types of 1) compile time 2) run time 

// two types compile time = 1) function overloading 2) operator overloading

// function overloding = "same function name but different parameter"    operator overloading="used operator for another purposed"


//Function overloading

class demo{
    public:
     void hello(){
        cout<<"Hi"<<endl;
     }
     void hello(int n){
        cout<<"Rushikesh"<<endl;
     }
};

int main(){
    demo d;
    d.hello(5);
}



// Operator overloading

class B{
    public:
     int a;
     int b;

     int add(){
        return a+b;
     }

     void operator +(B &obj){
            int value1 = this -> a;
            int value2 = obj.a;
            cout<<"output is:"<<value2-value1<<endl;
     }
};

int main(){
    B obj1,obj2;

    obj1.a=3;
    obj2.a=7;

    obj1+obj2;
}

*/

// Run-time polymorphisum 
// method overriding or function overriding = "same function name and same parameter " only possible in inheritance only
