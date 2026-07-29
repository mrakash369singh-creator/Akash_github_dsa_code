// circuler linked list delete at tail
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
    void deleteAtHead(){
        if(head == NULL) return;
        else if(head == tail){
            delete head;
            head = tail = NULL;

        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
        
    }
    void deleteAtTail(){
        if(head == NULL) return;
        else if(head == tail){
            delete head;
            head = tail = NULL;

        }else{
            Node* temp  = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }
};
int main(){
    CircularList cll;
    cll.inseartAtTail(1);
    cll.inseartAtTail(2);
    cll.inseartAtTail(3);
    cll.deleteAtHead();
    // cll.deleteAtHead();
    // cll.deleteAtHead();
    cll.print();
    cll.deleteAtTail();
    cll.print();
    cll.deleteAtTail();
    cll.print();

    return 0;
}