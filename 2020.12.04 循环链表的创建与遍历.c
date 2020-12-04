#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct Node {
		int data;
		struct Node* next;
	}Node;
	Node* Head = (Node*)malloc(sizeof(Node));
	Node* p = Head;
	Head->data = 100;
	for (int i = 1; i <= 10; i++) {
		Node* a = (Node*)malloc(sizeof(Node));
		a->data = i;
		a->next = NULL;				
		p->next = a;
		p = p->next;
	}
	p->next = Head->next;										//尾结点指向头结点，形成循环
	for (p = Head->next->next; p != Head->next; p = p->next) {	//结束标志为p回到指向头结点
		printf("%d\n", p->data);
	}
	printf("%d", p->data);
	return 0;
}
