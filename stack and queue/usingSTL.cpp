#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    queue<int>qq;
    qq.push(10);
    qq.push(20);
    qq.push(30);
    qq.push(40);
    qq.push(50);
    qq.push(60);

     while(!qq.empty()){
        cout<<qq.front()<<endl;
        qq.pop();
    }
    qq.front();


    return 0;
}