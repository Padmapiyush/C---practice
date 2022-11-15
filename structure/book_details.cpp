/*
Write a program to enter the details of five book (bookid, bname, mrp) and print its details
*/
#include<iostream>
using namespace std;

struct book{
    int id, mrp;
    char name[20];
};

int main(){
    struct book p[30];
    for(int i=0;i<5;i++){
        cout<<"Enter details of book "<<i+1<<endl;
       cin>>p[i].id;
       cin>>p[i].mrp;
       cin>>p[i].name;
    }
    for(int i=0;i<5;i++){
        cout<<"Book-id is "<<p[i].id<<endl;
        cout<<"Book mrp is "<<p[i].mrp<<endl;
        cout<<"Book name is "<<p[i].name<<endl;
         
    }
    return 0;
}