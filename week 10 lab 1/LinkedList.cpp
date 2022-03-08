
//  LinkedList.cpp

//  LinkedList

//

 

#include "LinkedList.hpp"

#include <iostream>

#include<string>

 

using namespace std;

list::list()

{

    head=NULL;

    tail=NULL;

}

 

list::~list(){

   

        node *n = this->head, *current = NULL; //initialization part

   

        while(n)   //start cleanup of nodes of the list

        {

            current = n;

            n=n->next;

            delete(current);

        }

       

        head = tail = NULL;

}

 

int list::size(){

    node *cur=new node;

    cur=head;

    int size = 0;

    while(cur!=NULL)

    {

        size++;

        cur=cur->next;

    }

    return size;

}

//at the end of the list

void list::add(int value)

{

  node *newest = new node;
  node *cur= new node;
  cur=head;
  newest->data = value;
  newest->next = NULL;
  if(head == NULL)
  {
      head = newest;
      tail = newest;
      return;
  }
  //Finds the last node
  while(cur->next!=NULL)
  {
    cur=cur->next;
  }
  cur->next=newest;
  tail = newest;
  return;

}

 

void list::addHead(int value)

{

    node *newest=new node;

    newest->data=value;

    newest->next=head;

    head=newest;

}

 

 int list::deleteTail(){
    node *cur=new node;
    node *pre= new node;
    cur=head;

    int size = 0;
    //Finds the node before the last
    while(cur->next->next!=NULL)
    {
        cur=cur->next;
    }

    pre = tail;
    cur->next = NULL;
    return pre->data;

 }

 

void list::display()

{

    node *cur=new node;

    cur=head;

    while(cur!=NULL)

    {

        cout<<cur->data<<"\t";

        cur=cur->next;

    }

}

 

string list::to_string()

{

    string str = "";

    node *temp=new node;

    temp=head;

    while(temp!=NULL)

    {

        //in java I can str + int

        str = str + ::to_string(temp->data) + "\t";

        temp=temp->next;

    }

    return str;

}