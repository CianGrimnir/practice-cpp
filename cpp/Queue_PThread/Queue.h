#include<stdio.h>                                                                                        
#include<stdlib.h>
#include<iostream>
#include<pthread.h>
#define MAX 40

struct Node* CreateNode(char* value);

struct Node{
	char* data;
	Node* next;
};

class Queue{
	Node *root;
	int count;
public:
	Queue();
	void push(char* value);
	char* pop();
	int size();
	void PrintQueue();
//	char* front();
};
