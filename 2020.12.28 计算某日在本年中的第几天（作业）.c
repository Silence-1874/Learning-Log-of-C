#include <stdio.h>
#include <stdlib.h>

typedef struct s {	//定义结构体s，储存年月日
	int year;
	int month;
	int day;
}*ymd;				//将指向该结构体的指针类型命名为ymd

int isrun(ymd);		//声明isrun函数，用于判断是否是闰年
int count(ymd);		//声明count函数，用于计算天数

int main()
{
	ymd p;									//定义结构体指针p
	p = (ymd)malloc(sizeof(struct s));		//初始化结构体
	printf("请输入年月日：");					//输出说明
	scanf_s("%d %d %d", &p->year,			//输入年月日
		&p->month, &p->day);
	printf("%d年%d月%d日是这一年的 第%d天",	//输出结果
		p->year, p->month, p->day, count(p));
	return 0;
}

int count(ymd p)
{
	int sum = p->day;
	int m[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };	//定义数组m，储存每个月份的天数
	for (int i = 0; i + 1 < p->month; i++) {			//计算天数
		sum += m[i];
	}
	if (isrun(p) && p->month > 2) {						//对闰年中2月以后的月份进行处理
		sum += 1;
	}
	return sum;
}

int isrun(ymd p)
{
	if (p->year % 400 == 0 || p->year % 4 == 0 && p->year % 100 != 0)
		return 1;
	else return 0;
}