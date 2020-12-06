#include <stdio.h>
#define MAXSIZE 100
int main()
{
	typedef struct Node {
		int data[MAXSIZE];	//数据域
		int top;			//栈顶标记
	}Stack;
	Stack S;				//定义栈
	Stack* stack = &S;
	stack->top = -1;		//初始top为-1，记为栈空

	int bool = 1;
	while (bool) {
		printf("请输入要压入的元素: ");
		int x;
		scanf_s("%d", &x);
		if (stack->top >= MAXSIZE - 1) {	//判断是否栈满
			printf("栈满！\n");
			break;
		} else {
			stack->data[++stack->top] = x;	//压入一个元素，并将栈顶标记向后移一位
		}
		printf("输入1继续圧栈，输入0结束圧栈： ");
		scanf_s("%d", &bool);
	}

	printf("当前栈内元素为\n");
	for (int cnt = stack->top; cnt >= 0; cnt--) {
		printf("%d\n", stack->data[cnt]);
	}

	printf("输入1开始出栈，输入0结束操作: ");
	scanf_s("%d", &bool);
	while (bool) {
		if (stack->top == -1) {				//判断是否栈空
			printf("栈空！\n");
			break;
		} else {
			printf("“%d”出栈！\n", stack->data[stack->top--]);	//弹出栈顶元素,并将栈顶标记向前移一位				
		}
		printf("输入1继续出栈，输入0结束出栈: ");
		scanf_s("%d", &bool);
	}

	printf("当前栈内元素为\n");
	for (int cnt = stack->top; cnt >= 0; cnt--) {
		printf("%d\n", stack->data[cnt]);
	}

	return 0;
}