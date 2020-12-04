#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct DulNode {
		int data;
		struct DulNode* prior;				//prior指向前一个结点
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
	for (; p != Head; p = p->prior) {		//反向输出
		printf("%d\n", p->data);
	}
	return 0;
}
