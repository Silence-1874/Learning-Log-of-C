#include <stdio.h>
#include <ctype.h>									//引入C标准库中的头文件ctype.h
#define MAXSIZE 100									//定义字符串最大长度的宏
void stc(char*, int*, int*, int*, int*);			//声明函数
int main()
{
	printf("请输入一行字符：\n");						//打印使用说明
	char str[100];									//定义字符型变量str，并给出足够大的储存空间
	gets(str);										//存储输入的字符
	int nalpha, nspace, ndigit, nother;				//定义储存各类型字符个数的指针
	nalpha = nspace = ndigit = nother = 0;			//初始化变量
	stc(str, &nalpha, &nspace, &ndigit, &nother);	//以各变量的地址为实参，调用函数
	printf("字母个数：%d\n", nalpha);				//输出字母个数
	printf("空格个数：%d\n", nspace);				//输出空格个数
	printf("数字个数：%d\n", ndigit);				//输出数字个数
	printf("其他字符个数：%d\n", nother);				//输出其他字符个数
	return 0;
}
void stc(char* str, int* a, int* b, int* c, int* d)
{													//以指针变量为形参，使得函数可以返回多个值
	printf("原字符\n");								//输出原字符
	for (int i = 0; *(str + i) != '\0' && i < MAXSIZE; i++)
	{												//从字符串中读取下一个字符，并判断是否为字符结束符，不是则跳出循环
		
		printf("%c", *(str + i));					//输出字符串
		if (isalpha(*(str + i))) (*a)++;			//判断是否为字母，是则统计字母的变量自增1
		else if (*(str + i) == ' ') (*b)++;			//判断是否为空格，是则统计空格的变量自增1
		else if (isdigit(*(str + i))) (*c)++;		//判断是否为数字，是则统计数字的变量自增1
		else (*d)++;								//不是字母、空格和数字，统计其他字符的变量自增1
	}
	printf("\n");
}