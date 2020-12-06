#include <stdio.h>
#define MAXSIZE 100
int main()
{
	typedef struct Node{
		int data[MAXSIZE];			//数据域
		int Front;					//队头标记
		int Rear;					//队尾标记
	}Queue;
	Queue Q;						//定义队列
	Queue* queue = &Q;
	queue->Front = queue->Rear = 0;	//初始Front与Rear为0，记为队列空

	int x;
	int bool = 1;
	while (bool) {
		if ((queue->Rear + 1) % MAXSIZE == queue->Front) {
			printf("队列满！\n");
			break;
		} else {
			printf("请输入要入队的元素: ");
			scanf_s("%d", &x);
			queue->Rear = (queue->Rear+1) % MAXSIZE;
			queue->data[queue->Rear] = x;
		}
		printf("输入1继续入队，输入0结束入队: ");
		scanf_s("%d", &bool);
	}

	printf("当前队列的元素为： \n");
	for (int i = (queue->Front + 1) % MAXSIZE; i != (queue->Rear + 1) % MAXSIZE ; i = (i+1) % MAXSIZE) {
		printf("a[%d]=%d\n", i, queue->data[i]);
	}
	
	printf("输入1开始出队，输入0结束操作： ");
	scanf_s("%d", &bool);
	while (bool) {
		if (queue->Front == queue->Rear) {
			printf("队列空！\n");
			break;
		} else {
			printf("“a[%d]=%d” 出队！\n", (queue->Front + 1) % MAXSIZE, queue->data[(queue->Front + 1) % MAXSIZE]);
			queue->Front = (queue->Front + 1) % MAXSIZE;
			
		}

		printf("输入1继续出队，出入0结束入队： ");
		scanf_s("%d", &bool);
	}

	printf("当前队列的元素为： \n");
	for (int i = (queue->Front + 1) % MAXSIZE; i != (queue->Rear + 1) % MAXSIZE; i = (i + 1) % MAXSIZE) {
		printf("a[%d]=%d\n", i, queue->data[i]);
	}
	return 0;
}