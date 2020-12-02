#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct Node {
		int data;
		struct Node* next;
	}Node;
	Node* Head = (Node*)malloc(sizeof(Node));
	Node* p= Head;
	for (int i = 1; i <= 10; i++) {
		Node* a = (Node*)malloc(sizeof(Node));
		a->data = i;
		a->next = NULL;
		p->next = a;
		p = p->next;
	}
	printf("请输入要读取的数的序号: ");
	int x;
	scanf_s("%d", &x);
	int cnt = 1;
	for (p = Head->next; p; p = p->next, cnt++) {
		if (cnt == x) {
			printf("第%d个数为%d", x, p->data);
			break;
		}
	}
}