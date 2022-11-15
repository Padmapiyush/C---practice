#include<iostream>
using namespace std;

int main(){
    char n;
    cin>>n;
    if(n>=48 && n<=57){
        cout<<"its a digit";
    }
    else{
        cout<<"notta digit";
    }
}