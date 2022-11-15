/*
Write a program to enter the details of five employee (id, sal, name) and print the print its details.
*/

#include<iostream>
using namespace std;

struct employee {
    int id, sal;
    char name[30];
};

int main(){
     struct employee p[5];
    //int x;
   // cin>>p.id;
    for(int x=0;x<5;x++){
        cout<<"Enter the details of employees";
        cin>>p[x].id;
        cin>>p[x].sal;
        cin>>p[x].name;
    }
    for(int x=0;x<5;x++){
        cout<<"Employee_id"<<p[x].id<<endl;
        cout<<"Employee_sal"<<p[x].sal<<endl;
        cout<<"Employee_name"<<p[x].name<<endl;
    }
    return 0;
}



