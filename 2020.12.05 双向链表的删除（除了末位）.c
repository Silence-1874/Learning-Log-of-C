#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct DulNode {
		int data;
		struct DulNode* prior;
		struct DulNode* next;
	}DulNode;
	DulNode* Head = (DulNode*)malloc(sizeof(DulNode));
	DulNode* p = Head;
	for (int i = 1; i <= 10; i++) {
		DulNode* a = (DulNode*)malloc(sizeof(DulNode));
		a->data = i;
		a->next = NULL;
		a->prior = p;
		p->next = a;
		p = p->next;
	}
	printf("请输入要删除的元素的序号： ");
	int n;
	scanf_s("%d", &n);
	int cnt = 1;
	for (p = Head->next; p; p = p->next, cnt++) {
		if (n == cnt) {
			p->prior->next = p->next;
			p->next->prior = p->prior;
			free(p);
			break;
		}
	}
	for (p = Head->next; p; p = p->next) {
		printf("%d\n", p->data);
	}
	return 0;
}