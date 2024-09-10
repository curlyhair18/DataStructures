#include <iostream>
using namespace std;
class Node
{
public:
    int data;     // class ki properties/attributes
    Node *next;

    Node(int a)
    {                   // constructor -> initialising the data variables of the class(intialising-> value dena)
        this->data = a; // this - pointign to its onwn object
        this->next = NULL;
    }
};
class SLL
{
    Node *head = NULL; // object created of class node named head and tail
    Node *tail = NULL;

public:
    void insertData()
    {
        int a;
        cout << "Enter a number to be entered in a LL:" << endl;
        cin >> a;
        Node *temp = new Node(a);
        // this condition will run for only once
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void printData()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }
    }

};

 
int main()
{

    SLL ll1;
    char y = 'y';
    while (y == 'y')
    {
        ll1.insertData();
        cout << "do you want to enter more number in a ll:(y/n)";
        cin >> y;
    }

    ll1.printData();

    return 0;
}