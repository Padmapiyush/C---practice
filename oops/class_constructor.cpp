#include<iostream>
using namespace std;

class student{ //creating a class
    public:    //access specifier
    string name;  //data_type and name of the variable as property
    int age;
    bool gender;

    student(){
        cout<<"DEFAULT CONSTRUCTOR"<<endl;
    }
    void setName(string s, int a, bool g){
        name=s;
        age=a;
        gender=g;
    }

    void getName(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    student(string s, int a, bool g){
        name=s;
        age = a;
        gender = g;
     } //constructor

    void printInfo(){

    }
};

int main(){

    student a("urvi", 20, 0);
    a.getName();
}