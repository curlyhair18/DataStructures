#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int a){
        this->data=a;
        this->next=NULL;
    }
};
class SLL{
    public:
    Node* head=NULL;
    Node* tail=NULL;

    void insertData(){
        int a;
        cout<<"Enter element to be entered in linkedlist"<<endl;
        cin>>a;
        Node* temp= new Node(10);
        if(head==NULL){
            head=tail=temp;
        }
        else{
            tail=temp;
            tail=temp->next;
        }
    }

};


////using unordered map
// class Solution {
//   public:
//     // Function to check if the linked list has a loop.
//     bool detectLoop(Node* head) {
//         Node* itr=head;
//         unordered_map<Node*,bool>mymap;
//         while(itr!=NULL){
//             if(mymap.find(itr)!=mymap.end()){
//                 return true;
//             }
//             mymap[itr]=true;
//             itr=itr->next;
//         }
//         // your code here
//         return false;
//     }
// };
// //rabit tortoise approach
// class Solution {
//   public:
//     // Function to check if the linked list has a loop.
//     bool detectLoop(Node* head) {
//        Node* rabit= head;
//        Node* tortoise=head;
//        while(rabit!=NULL){
//            if(rabit->next==NULL){
//                return false;
//            }
//            rabit=rabit->next->next;
//            tortoise=tortoise->next;
           
//            if(rabit==tortoise){
//                return true;
//            }
        
//        }
//            return false;
//        }
// };

int main(){
    return 0;
}