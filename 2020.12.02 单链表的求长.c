#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct Node {
		int data;
		struct Node* next;
	}Node;
	Node* Head = (Node*)malloc(sizeof(Node*));
	Node* p = Head;
	for(int i = 1; i <= 10; i++) {
		Node* a = (Node*)malloc(sizeof(Node*));
		a->data = i;
		a->next = NULL;
		p->next = a;
		p = p->next;
	}
	int cnt = 0;
	for (p = Head->next; p; p = p->next,cnt++) {
		;
	}
	printf("链表的长度为%d", cnt);
	return 0;
}