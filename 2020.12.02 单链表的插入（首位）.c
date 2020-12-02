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
	for (int i = 1; i <= 10; i++) {
		Node* a = (Node*)malloc(sizeof(Node*));
		a->data = i;
		a->next = NULL;
		p->next = a;
		p = p->next;
	}
	printf("请输入要插到首位的元素： ");
	int x;
	scanf_s("%d", &x);
	Node* NewHead = (Node*)malloc(sizeof(Node*));
	p = Head;
	p->data = x;
	p = NewHead;
	p->next = Head;
	for (p = NewHead->next; p; p=p->next) {
		printf("%d\n", p->data);
	}
	return 0;
}