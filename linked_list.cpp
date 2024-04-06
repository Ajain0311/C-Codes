#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
class InsetNode{
    public:
    Node* head;
    
    InsetNode(){
        head = nullptr;
    }
    void insert(int data){
        Node *newnode = new Node(data);
        if(head == nullptr){
            head = newnode;
        }
        else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    InsetNode obj;
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.display();
    return 0;
}