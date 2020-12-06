#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct Node {
		int data;
		struct Node* next;
	}Queue;

	Queue* Front = (Queue*)malloc(sizeof(Queue));	//创建头结点，代表队头（只出不进）
	Queue* Rear = (Queue*)malloc(sizeof(Queue));	//创建尾结点，代表队尾（只进不出）
	Front->next = Rear;
	Rear->next = NULL;
	Queue* Head = Front;							//创建头指针

	int x;
	int bool = 1;
	while (bool) {
		printf("请输入要入队的元素: ");
		scanf_s("%d", &x);

		Queue* a = (Queue*)malloc(sizeof(Queue));	//尾插法，先插入的元素在队头
		a->data = x;
		a->next = Rear;
		Head->next = a;
		Head = Head->next;

		printf("输入1继续入队，输入0结束入队: ");
		scanf_s("%d", &bool);
	}

	printf("当前队列的元素为： \n");
	for (Head = Front->next; Head->next; Head = Head->next) {
		printf("%d\n", Head->data);
	}

	printf("输入1开始出队，输入0结束操作： ");
	scanf_s("%d", &bool);
	while (bool) {
		if (Front->next == Rear) {
			printf("队列空！\n");
			break;
		} else {									//队头元素出队
			Head = Front->next;
			Front->next = Front->next->next;
			printf("“%d”出队！\n", Head->data);
			free(Head);
		}
		
		printf("输入1继续出队，出入0结束出队： ");
		scanf_s("%d", &bool);
	}

	printf("当前队列的元素为： \n");
	for (Head = Front->next; Head->next; Head = Head->next) {
		printf("%d\n", Head->data);
	}
	return 0;
}