#include<stdio.h>
void feedback (int*p,int*q)//void feedback(int*,int*)错误：不可以忽略形参名
{
	*p = *p + 10;		//通过被调函数修改主函数中普通变量的内容 注意点
	*q = *q + 10;		//实参必须为该普通变量的地址
	return;				//形参必须为指针变量
}						//在被调函数中通过 *形参名=…… 来实现修改
int main()
{
	int a = 1;
	int b = 2;
	feedback(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}