#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2; i<sqrt(n); i++){
        /* any number will be guessed prime if none of the numbers
         below his square root divides it.*/
        if(n%i==0){
            cout<<"not prime"<<endl;
            flag =1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime";
    }

    return 0;
} 