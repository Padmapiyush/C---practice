#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=1; i<=n*2; i++){
        for(int j=1; j<=n*2-1; j++){
            if(j==n-i+1 || j==n+i-1 || j==){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}