#include "node.h"
#include <iostream>
#include <cstring>

using namespace std;

//define
void add(Node*& head, Node* cur, Node* newnext);
void print(Node* head, Node* cur);

//add and print students
int main(){
  Node* head = NULL;
  add(head, head, new Node(new student));
  print(head, head);
  add(head, head, new Node(new student));
  print(head, head);
}

//make current into the next
void add(Node*& head, Node* cur, Node* newnext){
  if(head == NULL){
    head = newnext;
  }
  else {
    while (cur->getNext()!= NULL){
      cur = cur->getNext();
    }
    cur->setNext(newnext);
    //cur->getNext()->Node(value);
  }
}

//print out next
void print(Node* head, Node* cur) {
  if(cur == head){
    cout << "student list: " << endl;
  }
  if(cur != NULL) {
    cout << cur->getStudent() << " " << endl;
    print(head, cur->getNext());
  }
  else {
    return;
  }
}
