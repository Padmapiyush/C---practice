#include<iostream>
using namespace std;

class student{ //creating a class
    public:    //access specifier
    string name;  //data_type and name of the variable as property
    int age;
    char gender;

    void printInfo(){

    }
};

int main(){
    student arr[3];
    for(int i=0; i<3; i++){
        cout<<"name = ";
        cin>>arr[i].name; // array to print name 
        cout<<"Age = ";
        cin>>arr[i].age; // array to print age
        cout<<"gender = ";
        cin>>arr[i].gender; // array to print gender
    }
    for(int i=0; i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}