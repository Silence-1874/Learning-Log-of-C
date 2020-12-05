#include <stdio.h>
#include<stdlib.h>
int main()	//链栈实际上就是一个只能采用头插法插入或删除数据的链表
{
	typedef struct Node{
		int data;
		struct Node* next;
	}stack;
	stack* top = NULL;

	int bool = 1;
	while (bool) {
		printf("请输入要压入的元素: ");
		int x;
		scanf_s("%d", &x);
		if (top == NULL) {	
			stack* a = (stack*)malloc(sizeof(stack));
			a->data = x;	
			a->next = NULL;			
			top = a;
		} else {
			stack* a = (stack*)malloc(sizeof(stack));
			a->data = x;
			a->next = top;
			top = a;
		}
		printf("输入1继续圧栈，输入0结束圧栈： ");
		scanf_s("%d", &bool);
	}

	/*printf("当前栈内元素为\n");
	for (; top; top = top->next) {
		printf("%d\n", top->data);
	}*/

	printf("输入1开始出栈，输入0结束操作: ");
	scanf_s("%d", &bool);
	while (bool) {
		if (top == NULL) {	
			printf("栈空！\n");
			break;
		}
		else {
			printf("“%d”出栈！\n", top->data);	//弹出栈顶元素,并将栈顶标记向前移一位
			stack* p;
			p = top;
			top = p->next;
			free(p); 
		}
		printf("输入1继续出栈，输入0结束出栈: ");
		scanf_s("%d", &bool);
	}

	printf("当前栈内元素为\n");
	for (; top; top = top->next) {
		printf("%d\n", top->data);
	}

	return 0;
}