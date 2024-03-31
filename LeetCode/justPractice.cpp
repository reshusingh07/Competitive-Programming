#include<iostream>
#include<stdio.h>
using namespace std;

  class Node{
    public :
      Node* prev;    // contain previous node address
      int data;     // contain value 
      Node* next;   //  contain next node address

      Node() {
        prev = NULL;
        next = NULL;
      }
      Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
      }
  };
class DLL {

      private:
        Node * head;
    
    pubic:
        DLL() {
            head = NULL;
        }
       void insertAtHead(int);


};

void insertAtHead(int d) {
    Node* node1 = new Node(d);
    
}

int main() {


    return 0;
}