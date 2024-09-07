#include<iostream>
using namespace std;

int  Fact(int n){
    // base fucntion
    if(n==1) return 1;

    return n*Fact(n-1);
}

int FactLoop(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
         ans=i*ans;
    }
    return ans;
}
int main(){

    cout<<Fact(10)<<endl;
    cout<<FactLoop(10)<<endl;
    
    return 0;
}