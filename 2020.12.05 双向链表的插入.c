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
	printf("请输入要插入的数以及要插入的位置： ");
	int x, n;
	int cnt = 1;
	scanf_s("%d %d", &x, &n);
	for (p = Head->next; p; p = p->next, cnt++) {
		if (cnt == n) {
			DulNode* add = (DulNode*)malloc(sizeof(DulNode));
			add->data = x;
			p->prior->next = add;
			add->prior = p->prior;
			add->next = p;
			p->prior = add;
		}
	}
	printf("正向输出:\n");
	for (p = Head->next; p->next; p = p->next) {
		printf("%d\n", p->data);
	}
	printf("%d\n", p->data);

	printf("反向输出:\n");
	for (; p != Head; p = p->prior) {
		printf("%d\n", p->data);
	}
	return 0;
}

