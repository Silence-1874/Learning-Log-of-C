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
		Node* a = (Node*)malloc(sizeof(Node));  //这里如果写“sizeof(Node*)”,下面free()就会报错
		a->data = i;							//因为申请的内存只有4个字节（指针的内存大小）
		a->next = NULL;							//而申请的内存是用来储存Node的
		p->next = a;
		p = p->next;
	}
	printf("请输入要删除的元素的序号： ");
	int n;
	scanf_s("%d", &n);
	int cnt = 2;
	Node* temp = NULL;
	for (p = Head->next; p; p = p->next, cnt++) {
		if (cnt == n) {
			temp = p->next;
			p->next = temp->next;
			free(temp);				//free()释放的是指针变量所指向的内存
			break;
		}
	}
	for (p = Head->next; p; p = p->next) {
		printf("%d\n", p->data);
	}
}