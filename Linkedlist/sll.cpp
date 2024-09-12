#include <iostream>
using namespace std;
class Node
{
public:
    int data; // class ki properties/attributes
    Node *next;

    Node(int a)
    {                   // constructor -> initialising the data variables of the class(intialising-> value dena)
        this->data = a; // this - pointign to its onwn object
        this->next = NULL;
    }
    ~Node(){
        int value=this->data;
        this->next=NULL;
        delete next;
        cout<<"the node with value"<<value<<"has been deleted"<<endl;
    }
};
class SLL
{
public:
    Node *head = NULL; // object created of class node named head and tail
    Node *tail = NULL;

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
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void insertAtHead(int a)
    {
        Node *temp = new Node(a);
        if (head == NULL)
        {
            head = tail = temp;
            return;
        }
        temp->next = head;
        head = temp;
    }
    void insertAtTail(int a){
        Node* temp=new Node(a);
        tail->next=temp;
        tail=temp;
    }

    void insertInBetween(int data, int predecessor){
        Node* temp= new Node(data);
        Node* itr=head;
        while(itr->data!=predecessor){
            itr=itr->next;
        }
        if(itr==NULL){
            cout<<"NO pred exissts"<<endl;
            return;
        }
        temp->next=itr->next;
        itr->next=temp;

    }

    void DeleteNode(int data){
        Node *itr=head;
        while(itr->next->data!=data){
            itr=itr->next;
        }
        if(itr==NULL){
            cout<<"No Data found!!"<<endl;
            return;
        }
        Node* temp= itr->next;
        itr->next=temp->next;
        temp->next=NULL;
        delete temp;
    }

};

void printDataRec(Node *temp)
{
    // base condition
    if (temp == NULL)
    {
        return;
    }
    cout << temp->data;
    printDataRec(temp->next);
}



int main()
{

    SLL ll1;
    char y = 'y';
    
    // while (y == 'y')
    // {
    //     ll1.insertData();
    //     cout << "do you want to enter more number in a ll:(y/n)";
    //     cin >> y;
    // }
    ll1.insertAtHead(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(4);
    ll1.insertAtTail(9);
    ll1.insertAtTail(6);
    ll1.insertAtTail(8);
    ll1.printData();
    cout<<endl;
    ll1.insertInBetween(5,8);
    ll1.printData();
    ll1.DeleteNode(2);
    cout<<endl;
    ll1.printData();


    return 0;
}