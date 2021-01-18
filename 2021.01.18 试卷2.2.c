#include <stdio.h>
#include <stdlib.h>
#define N 9				//N为链表的结点数(简单起见，不包括头结点），你可以自己更改N来验证一下
struct link
{
	char data;
	struct link* next;
};
//下面的主函数用于创建链表
int main()
{
	struct link* Head = (struct link*)malloc(sizeof(struct link));
	struct link* p = Head;								
	for (int i = 1; i <= N; i++) {
		struct link* a = (struct link*)malloc(sizeof(struct link));	
		a->data = i;		
		a->next = NULL;		
		p->next = a;
		p = p->next;
	}

	p = Head->next;			//打印链表
	printf("链表是:");
	while (p) {				
		printf("%d——", p->data);
		p = p->next;
	}
	printf("NULL");

	p = Head->next;
	printf("\n结点数为%d", count_node(p));//调用函数
	return 0;
}
int count_node(struct link* head)
{
	struct link* p;
	int c = 0;
	p = head;
	while (p != NULL)
	{
		c++;
		p = p->next;
	}
	return c;
}
