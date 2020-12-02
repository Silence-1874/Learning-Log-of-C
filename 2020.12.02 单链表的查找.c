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
	for (int i = 1; i <= 10; i++) {
		Node* a = (Node*)malloc(sizeof(Node));
		a->data = i;
		a->next = NULL;
		p->next = a;
		p = p->next;
	}
	printf("请输入要查找的数: ");
	int x;
	scanf_s("%d", &x);
	int cnt = 1;
	int isFound = 0;
	for (p = Head->next; p; p = p->next, cnt++) {
		if (p->data == x) {
			printf("查找的元素在第%d位", cnt);
			isFound = 1;
			break;
		}
	}
	if (!isFound) printf("查无此数");
	return 0;
}