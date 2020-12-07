#include<stdio.h>
void dtos(int);							//声明函数
int main()
{
	printf("请输入要要转化的数字： ");	//输出说明
	int x;								//定义整型变量x
	scanf_s("%d", &x);					//输入x
	dtos(x);						    //调用函数
	return 0;
}
void dtos(int x)
{
	if (x < 0) {
		putchar('-');					//对负数进行转化
		x = -x;
	}
	if (x / 10)	dtos(x / 10);			//对去掉第一位数之后的数进行递归
	//dtos(x / 10);	
	putchar(x % 10 + '0');				//将数字转化为字符
	putchar(35);						//将数字字符间隔开
}