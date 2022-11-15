/*
Write a program to enter the detail of five student (rollno, name, fees) and print its detail. 
 */
#include<iostream>
using namespace std;

struct student{
    int rollno, fees;
    char name[20];
};

int main(){
    student p[20];
    for(int i=0; i<5; i++){
        cout<<"Enter the details of student "<<i+1<<endl;
        cout<<"Enter the Roll no "<<endl;
        cin>>p[i].rollno;
        cout<<"Enter the fees "<<endl;
        cin>>p[i].fees;
        cout<<"Enter the name "<<endl;
        cin>>p[i].name;
    }
    for(int i=0; i<5; i++){
        cout<<"Student roll no is "<<p[i].rollno<<endl;
        cout<<"Student fees is "<<p[i].fees<<endl;
        cout<<"Student name is "<<p[i].name<<endl;
    }
    return 0;
}