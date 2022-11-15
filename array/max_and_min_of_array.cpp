#include<iostream>
#include<climits> //climits is a header file for min and max
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN; //still figuring out
    int minNo=INT_MAX; //still figuring out

    for(int i=0; i<n; i++){
        maxNo=max(maxNo, arr[i]);
        minNo=min(minNo, arr[i]);
    }
    cout<<maxNo<<" "<<minNo;
    return 0;
}