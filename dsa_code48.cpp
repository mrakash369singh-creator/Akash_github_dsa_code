// circuler linked list inseart at tail
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    } 

};
class CircularList{
    Node* head;
    Node* tail;
public:
    CircularList(){
        head = tail = NULL;
    }
    void inseartAtHead(int val){
        Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail = NULL;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;

        }
    }
    void inseartAtTail(int val){
         Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail = NULL;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;

        }
    }
    void print(){
        if(head = NULL) return;
        cout<<head->data<<"->";
        Node* temp = head->next;

        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
};
int main(){
    CircularList cll;
    cll.inseartAtTail(1);
    cll.inseartAtTail(2);
    cll.inseartAtTail(3);
    cll.print();

    return 0;
}