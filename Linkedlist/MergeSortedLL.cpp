#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        this->data = data1;
        this->next = NULL;
    }
};
class SLL
{
    public:
    Node *head = NULL;
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
            tail = temp;
        }
    }
    Node *MergeSortedLL(Node *head1, Node *head2)
    {
        if (head1 == NULL)
            return head2;
        if (head2 == NULL)
            return head1;

        Node *anshead = new Node(-1);
        Node *anstail = anshead;

        while (head1 != NULL && head2 != NULL)
        {

            if (head1->data < head2->data)
            {
                Node *temp = new Node(head1->data);
                anstail->next = temp;
                anstail = temp;
                head1 = head1->next;
            }
            else
            {
                Node *temp = new Node(head2->data);
                anstail->next = temp;
                anstail = temp;
                head2 = head2->next;
            }
        }
        while (head1 != NULL)
        {
            Node *temp = new Node(head1->data);
            anstail->next = temp;
            anstail = temp;
            head1 = head1->next;
        }
        while (head2 != NULL)
        {
            Node *temp = new Node(head2->data);
            anstail->next = temp;
            anstail = temp;
            head2 = head2->next;
        }
        anshead = anshead->next;
        return anshead;
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
};

int main()
{
    SLL LL1,LL2,LL3;
    LL1.insertData(2);
    LL1.insertData(4);
    LL1.insertData(6);
    LL1.insertData(8);

    LL2.insertData(3);
    LL2.insertData(5);
    LL2.insertData(7);
    LL2.insertData(9);
    LL2.insertData(11);

    LL3.head=LL3.MergeSortedLL(LL1.head,LL2.head);
    LL3.printData();

    return 0;
}