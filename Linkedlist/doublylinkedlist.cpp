#include <iostream>
using namespace std;

class Node
{
public:
    int data; // class ki properties/attributes
    Node *next;
    Node *prev;

    Node(int a)
    {                   // constructor -> initialising the data variables of the class(intialising-> value dena)
        this->data = a; // this - pointign to its onwn object
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        int value=this->data;
        this->next=NULL;
        this->prev=NULL;
        delete next;
        delete prev;

        cout<<"the node with value"<<value<<"has been deleted"<<endl;
    }
};
class DLL
{
public:
    Node *head = NULL; // object created of class node named head and tail
    Node *tail = NULL;

    void insertData(int a)
    {
        
        Node *temp = new Node(a);
        // this condition will run for only once
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev=tail;
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
        head->prev = temp;
        head = temp;
    }
    void insertAtTail(int a){
        Node* temp=new Node(a);
        tail->next=temp;
        temp->prev=tail;
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
        temp->prev=itr;
        itr->next=temp;
        temp->next->prev=temp;
        

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
        itr->next->prev=itr;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }

};


int main(){
    DLL dll1;
    dll1.insertData(2);
    dll1.insertData(20);
    dll1.insertData(200);
    dll1.insertData(3);
    dll1.insertData(30);
    dll1.insertData(300);
    dll1.insertData(4);

    
    cout<<dll1.head->next->next->next->prev->data;
    dll1.DeleteNode(3);
    dll1.printData();

    



    return 0;
}