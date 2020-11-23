#include<stdio.h>
int main()
{
	char c1, c2;						//定义字符型变量
	//int c1,c2;						//(3)
	c1 = 97;							//初始化c1
	c2 = 98;							//初始化c2
	//c1 = 197;							//(2)
	//c2 = 198;							//(2)
	printf("c1=%c,c2=%c\n", c1, c2);	//按字符型输出c1，c2
	printf("c1=%d,c2=%d\n", c1, c2);	//按整型输出c1，c2
	return 0;
}