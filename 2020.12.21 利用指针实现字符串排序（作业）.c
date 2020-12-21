#include <stdio.h>
#include <string.h>

void f(char**);					//声明f函数
void output(char**);			//声明output函数

int main()
{
	char s[5][10] = { "January",//定义字符串数组
		"May","March","Jue","April" };
	char* ps[5] = { s[0],
		s[1],s[2],s[3],s[4] };	//定义指针数组ps，指向各个字符串
	char** p = ps;				//定义二级指针p，指向指针数组ps
	printf("原数组为:");			//输出说明
	output(p);					//调用output函数，输出原数组
	f(p);						//调用f函数，对字符串数组进行排序
	printf("\n排序后的数组为:");	//输出说明
	output(p);					//输出排序后的数组
	return 0;
}

void f(char** p)				//冒泡排序
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (strcmp(p[j], p[j + 1]) > 0) {
				char temp[10];
				strcpy(temp, p[j]);
				strcpy(p[j], p[j + 1]);
				strcpy(p[j + 1], temp);
			}
		}
	}
}

void output(char** p)			//输出5个字符串
{
	for (int i = 0; i < 5; i++) {
		printf("%s ", *(p + i));
	}
}