#include <stdio.h>
#include <stdlib.h>

#define NUM 10

typedef struct s {	//定义结构体s,储存学生数据
	int score[3];	//储存3门课的成绩
	int n;			//储存学生学号
	char name[10];	//储存学生姓名
}*stu;				//将指向该结构体的指针类型命名为stu

void avg(stu, int);	//声明求平均分函数avg
int search(stu);	//声明排序函数sort
void output(stu);	//声明输出函数output
int main()
{
	stu p = (stu)malloc(sizeof(struct s) * NUM);	//初始化指针p

	for (int i = 0; i < NUM; i++) {					//初始化学生数据
		printf("请输入第%d名学生的姓名:\n", i + 1);
		scanf_s("%s", (p + i)->name, 10);
		printf("请输入第%d名学生的学号，以及三门课的成绩:\n", i + 1);
		scanf_s("%d %d %d %d", &(p + i)->n, &(p + i)->score[0],
			&(p + i)->score[1], &(p + i)->score[2]);
	}
	for (int i = 0; i < 3; i++) {	//输出三门课的平均分
		avg(p, i);					//调用avg函数
	}
	int x = 0;
	x = search(p);					//调用search函数，找出最高分学生
	output(p + x);					//调用output函数，输出最高分学生的相关信息
	return 0;
}

void avg(stu p, int x)
{
	double sum = 0;
	for (int i = 0; i < NUM; i++) {
		sum += (p + i)->score[x];	//统计所有同学某一门课程的总分
	}
	printf("第%d门课的平均分为 %lf\n", x + 1, sum / NUM);
}

int search(stu p)					//顺序查找
{
	int max = 0;
	for (int i = 0; i < NUM; i++) {
		if ((p + max)->score[0] + (p + max)->score[1] + (p + max)->score[2]
			< (p + i)->score[0] + (p + i)->score[1] + (p + i)->score[2]) {
			max = i;
		}
	}
	return max;
}

void output(stu p)
{
	printf("分数最高的学生为%s\n", p->name);
	printf("学号为%d\n", p->n);
	printf("第1门课的分数为%d\n", p->score[0]);
	printf("第2门课的分数为%d\n", p->score[1]);
	printf("第3门课的分数为%d\n", p->score[2]);
	printf("平均分为%lf\n", (double)(p->score[0] + p->score[1] + p->score[2]) / 3);
}