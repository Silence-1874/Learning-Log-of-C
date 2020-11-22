#include<stdio.h>
void exchange(int * a, int * b)
{
	int t;
	//int *;
	t =  *a;
	*a = *b;
	*b = t;
	//t = a;	这样无法达到目的
	//a = b;	因为只是交换了指针变量所指向的地址
	//b = t;	并没有交换地址所储存的内容
	return;
}
int main()
{
	int a = 3;
	int b = 5;
	exchange(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}