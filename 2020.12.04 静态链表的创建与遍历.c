#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 100			//保证空间足够大
int main()
{
	typedef struct {
		int data;
		int cur;								//cur储存下一个元素的下标，相当于指针
	}Node;
	
	Node List[MAXSIZE];							//开辟空间
	for (int i = 0; i < MAXSIZE - 1; i++) {		//创建备用链表，表头为a[0]
		List[i].cur = i + 1;					//将每个点的下标赋给其前面的结点的cur
		List[i].data = 0;						//初始为空表
	}
	List[MAXSIZE - 1].cur = 0;					//最后一个结点的cur为0，储存第一个结点的下标，相当于头指针
	List[MAXSIZE - 1].data = 0;					//最后一个结点的数值为0，作为备用链表是否用完的标志

	int i = 1;
	for (; i<=10; i = List[i].cur) {			//数据链表表头为a[1],初始化链表
		List[i].data = i;						//存入数据
	}
	List[0].cur = i+1;							//调整备用链表头结点
	List[i].data = 0;							//数据链表的最后一个元素为0,作为结束的标志

	for (int j = 1; List[j].data; j = List[j].cur) {	//遍历静态链表
		printf("%d\n", List[j].data);
	}

	return 0;
}