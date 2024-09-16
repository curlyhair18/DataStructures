#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int a)
    {
        this->data = a;
        this->left = NULL;
        this->right = NULL;
    }
};
class BT
{
public:
    Node *Root = NULL;

    void insert(int data)
    {
        if (Root == NULL)
        {
            Node *temp = new Node(data);
            Root = temp;
        }
        string Option;
        cout<<"left or right"<<endl;
        cin>>Option;
        if(Option == "left"){
            
        }

    }
};
int main()
{
    return 0;
}