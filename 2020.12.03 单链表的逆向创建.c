#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct Node
	{
		int data;
		struct Node* next;
	}Node;
	Node* Head = (Node*)malloc(sizeof(Node));
	Head->next = NULL;
	for (int i = 1; i <= 10; i++) {
		Node* a = (Node*)malloc(sizeof(Node));
		a->data = i;
		a->next = Head->next;
		Head->next = a;
	}
	Node* p;
	for (p = Head->next; p; p = p->next) {
		printf("%d\n", p->data);
	}
	return 0;
}