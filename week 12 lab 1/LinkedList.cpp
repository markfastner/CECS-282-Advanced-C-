#include "LinkedList.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

list::list() {
	head=NULL;
	tail=NULL;
}
 

list::~list() {
	node *n = this->head, *current = NULL; //initialization part
	// start cleanup of nodes of the list
	while(n) {
		current = n;
		n=n->next;
		delete(current);
    }
	head = tail = NULL;
}


int list::size() {
	node *cur=new node;
  cur=head;
  int size = 0;

  while(cur!=NULL) {
		size++;
		cur=cur->next;
	}
  return size;
}

// at the end of the list
void list::add(Student value) {

	node *newest = new node;
	node *cur = new node;
	cur = head;
	newest->s = value;
	newest ->next = NULL;
	if (head == NULL) {
		head = newest;
		tail = newest;
		return;
	}
	while (cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = newest;
	tail = newest;
	return;

}

void list::addHead(Student value) {
	node *newest=new node;
	newest->s=value;
	newest->next=head;
	head=newest;

  
}


Student list::deleteTail() {
  //cout<<"ONE";
	node *cur = new node;
	node *prev = new node;
	int temp = 0;
	cur = this->head;
	while (cur->next->next != NULL)
		cur = cur->next;
	prev = tail;
	cur->next = NULL;
  //cout<<"TWO";
	return prev->s;
//Student p("A",1.0,123);
//return p;
}


void list::display() {
	node *cur=new node;
	cur=head;

    while(cur!=NULL) {
		cout<<"student name:" <<cur->s.getName()<<"\t";
    cout<<"student gpa:" <<cur->s.getId()<<"\t";
		cur=cur->next;
    }
}
 

string list::to_string() {
	string str = "";
  node *temp=new node;
  temp=head;

  while(temp!=NULL) {
    //in java I can str + int
    str = str + temp->s.getName() + "\tGPA: " + ::to_string(temp->s.getGpa()) + "\tID: " + ::to_string(temp->s.getId()) + "\n";
    temp=temp->next;
  }
  return str;
}