#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct Node {	//定义结点结构
		int data;			//数据域
		struct Node* next;	//指针域
	}Node;

	Node* Head = (Node*)malloc(sizeof(Node));	//创建头结点，储存头指针
	Node* p = Head;								//指针p用于遍历，一开始指向头结点
	for (int i = 1; i <= 10; i++) {				//初始化链表	
		Node* a = (Node*)malloc(sizeof(Node));	//创建新的数据空间
		a->data = i;		//给结点赋值
		a->next = NULL;		//给将下一个结点的指针变量赋为NULL，保证尾结点的指针变量所指向的地址为NULL
		p->next = a;		//p保持在当前结点的前一位
		p = p->next;	
	}

	for(p = Head->next; p; p = p->next) {			//遍历链表
		printf("%d\n", p->data);
	}
	return 0;
}