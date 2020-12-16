#include<stdio.h>

typedef struct {//定义结构体student
	int a;		//储存第一门课成绩
	int b;		//储存第二门课成绩
	int c;		//储存第三门课成绩
	int d;		//储存第四门课成绩
	int e;		//储存第五门课成绩
	int n;		//储存学生学号
}student;

double avg(student*);//声明求平均分函数avg
void E(student*);	 //声明求不及格学生函数
void S(student*);	 //声明求优秀学生函数

int main()
{
	student stu[4];					//定义结构体数组，代表4个学生
	printf("平均分为%lf", avg(stu));	//调用avg函数，输出平均分
	E(stu);							//调用E函数
	S(stu);							//调用S函数
	return 0;
}

double avg(student* stu)
{
	double sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += (stu + i)->a;			//统计所有同学第一门课程的总分
	}
	return sum / 4;					//记录平均分
}

void E(student* stu)
{
	for (int i = 0; i < 4; i++) {
		int cnt = 0;
		if ((stu + i)->a < 60) cnt++;	//cnt统计不及格的课程数
		if ((stu + i)->b < 60) cnt++;
		if ((stu + i)->c < 60) cnt++;
		if ((stu + i)->d < 60) cnt++;
		if ((stu + i)->e < 60) cnt++;
		if (cnt > 2) {					//不及格课程数大于2，输出相关信息
			int sum = 0;
			printf("学号为%d\n", (stu + i)->n);
			printf("%d\n", (stu + i)->a);
			sum += (stu + i)->a;
			printf("%d\n", (stu + i)->b);
			sum += (stu + i)->b;
			printf("%d\n", (stu + i)->c);
			sum += (stu + i)->c;
			printf("%d\n", (stu + i)->d);
			sum += (stu + i)->d;
			printf("%d\n", (stu + i)->e);
			sum += (stu + i)->e;
			printf("平均成绩为%lf\n", sum / 5.0);
		}
	}
}

void S(student* stu)
{
	for (int i = 0; i < 4; i++) {
		int sum = 0;
		sum += (stu + i)->a;
		printf("%d\n", (stu + i)->b);
		sum += (stu + i)->b;
		printf("%d\n", (stu + i)->c);
		sum += (stu + i)->c;
		printf("%d\n", (stu + i)->d);
		sum += (stu + i)->d;
		printf("%d\n", (stu + i)->e);
		sum += (stu + i)->e;
		if (sum / 5.0 > 90) printf("%d", (stu + i)->n);
	}
	for (int i = 0; i < 4; i++) {
		if ((stu + i)->a > 85 && (stu + i)->b > 85 && (stu + i)->c > 85 && (stu + i)->d > 85 && (stu + i)->e > 85)
			printf("%d", (stu + i)->n);
	}
}