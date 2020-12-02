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
	printf("请输入要插入的数以及要插入的位置： ");
	int x, n;
	int cnt = 2;
	scanf_s("%d %d", &x, &n);
	for (p = Head->next; p; p = p->next, cnt++) {
		if (cnt == n) {
			Node* add = (Node*)malloc(sizeof(Node*));
			add->data = x;
			add->next = p->next;
			p->next = add;
			break;
		}
	}
	for (p = Head->next; p; p = p->next) {
		printf("%d\n", p->data);
	}
}