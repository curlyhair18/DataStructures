#include<iostream>
using namespace std;

int fibonacci(int n){
    //base case
    if(n==1)
    return 0;
    if(n==2)
    return 1;

    return fibonacci(n-1)+fibonacci(n-2);

}

int main(){

    cout<<fibonacci(8);
    return 0;
}