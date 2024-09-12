#include <iostream>
using namespace std;
class queue
{
    public:
    int front;
    int back;
    int *arr;
    int size;

    queue(int s)
    {
        this->size = s;
        arr = new int(size);
        front = -1;
        back = -1;
    }

    void push(int number)
    {
        if(front==-1) 
            back=back+1;
        if (front == size)
        {
            cout << "stack is full" << endl;
            return;
        }
        arr[front + 1] = number;
        front = front + 1;
    }
    void pop()
    {
        if (back > front)
        {
            cout << "stack is empty" << endl;
            back=front=-1;
            return;
        }
        back++;
    }
    void print_queue()
    {
        if (back > front || front==-1)
        {
            cout << "No elements to print" << endl;
            return;
        }
        for (int i = back; i <= front; i++)
        {
            cout << arr[i] <<" ";
        }
    }
};

int main()
{
    queue st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.print_queue();
    st.pop();
    cout << endl;
    st.print_queue();
    return 0;
}