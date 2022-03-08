#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Student.h"
#include <stdio.h>
#include<string>
using namespace std;

struct node {
	Student s;
	node *next;
};


class list {
	private:
		node *head, *tail;
	public:
		list();
		~list();
		int size();
		void add(Student value);
		void addHead(Student value);
		Student deleteTail();
		void display();
		string to_string();
};
#endif /* LinkedList_hpp */