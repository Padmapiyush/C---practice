#include<iostream>
using namespace std;

int main(){
    int n=0;
    while(n<10){
        if(n==4){
            continue;
        }
        cout<<n<<endl;
        n++;
    }
}