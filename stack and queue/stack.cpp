#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int vacancy;

    int *arr;
    stack(int s)
    {
        size = s;
        arr = new int(size);
        top = -1;
        vacancy = s;
    }
    void push(int number)
    {
        if (vacancy <= 0)
        {
            cout << "stack is full";
            return;
        }
        else
        {
            arr[top+1] = number;
            top+=1;
            vacancy-=1;
        }
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "stack is empty" << endl;
            return;
        }
        else
        {
            top=top-1;
            vacancy=vacancy+1;
        }
    }
    void print_stack()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()

{
    stack st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.print_stack();
    st.pop();
    cout<<endl;
    st.print_stack();
    return 0;
}