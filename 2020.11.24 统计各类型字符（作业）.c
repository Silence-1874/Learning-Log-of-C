#include<stdio.h>
#include <ctype.h>							//引入C标准库中的头文件ctype.h
int main()
{
	printf("请输入一行字符：\n");				//打印使用说明
	char c;									//定义字符型变量c，用于储存单个字符
	int nalpha,nspace, ndigit, nother;		//定义储存各类型字符个数的变量
	nalpha = nspace = ndigit = nother = 0;	//初始化变量
	while ((c = getchar()) != '\n')			//从stdin流中读取下一个字符，赋给c，并判断是否为换行符，不是则跳出循环
	{
		if (isalpha(c)) nalpha++;			//判断是否为字母，是则统计字母的变量自增1
		else if (c == ' ') nspace++;		//判断是否为空格，是则统计空格的变量自增1
		else if (isdigit(c)) ndigit++;		//判断是否为数字，是则统计数字的变量自增1
		else nother++;						//不是字母、空格和数字，统计其他字符的变量自增1
	}
	printf("字母个数：%d\n", nalpha);		//输出字母个数
	printf("空格个数：%d\n", nspace);		//输出空格个数
	printf("数字个数：%d\n", ndigit);		//输出数字个数
	printf("其他字符个数：%d\n", nother);		//输出其他字符个数
	return 0;
}