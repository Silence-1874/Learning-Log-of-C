#include <stdio.h>
#include<stdlib.h>
//单链表的合并
int main()
{
	typedef struct Node {
		int data;
		struct Node* next;
	}Node;

	int L1[] = { 1,2,3,4,5,6,9,10 };
	int L2[] = { 1,3,6,7,8,10,11 };

	Node* Head1 = (Node*)malloc(sizeof(Node));
	Node* p1 = Head1;
	for (int i1 = 0; i1 < sizeof(L1) / sizeof(int); i1++) {
		Node* a1 = (Node*)malloc(sizeof(Node));
		a1->data = L1[i1];
		a1->next = NULL;
		p1->next = a1;
		p1 = p1->next;
	}

	Node* Head2 = (Node*)malloc(sizeof(Node));
	Node* p2 = Head2;
	for (int i2 = 0; i2 < sizeof(L2) / sizeof(int); i2++) {
		Node* a2 = (Node*)malloc(sizeof(Node));
		a2->data = L2[i2];
		a2->next = NULL;
		p2->next = a2;
		p2 = p2->next;
	}

	Node* Head = (Node*)malloc(sizeof(Node));
	Node* p = Head;
	Head->next = NULL;
	for (p1 = Head1->next, p2 = Head2->next; p1 && p2;) {
		if (p1->data == p2->data) {
			p->next = p1;
			p = p1;

			p1 = p1->next;
			p2 = p2->next;
		} else if(p1->data < p2->data){
			p->next = p1;
			p = p1;

			p1 = p1->next;
		} else {
			p->next = p2;
			p = p2;

			p2 = p2->next;
		}
	}
	p->next = p1 ? p1 : p2;
	free(Head1);

	for (p = Head->next; p; p = p->next) {
		printf("%d\n", p->data);
	}
	return 0;
}