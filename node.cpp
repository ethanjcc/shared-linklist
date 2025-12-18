#include "node.h"

//constructor
Node::Node(student* b) {
  value = b;
  next = NULL;
}

//destructor
Node::~Node() {
  delete value;
  next = NULL;
}

//get student 
student* Node::getStudent(){
  return value;
}

//set next node
void Node::setNext(Node* newnext) {
  next = newnext;
}

//get next node
Node* Node::getNext() {
  return next;
}
