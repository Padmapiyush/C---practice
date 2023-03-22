#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,ele;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        cin>>ele;
        v.push_back(ele);
    } 
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
