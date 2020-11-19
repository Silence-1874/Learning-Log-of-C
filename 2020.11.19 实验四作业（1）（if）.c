#include<stdio.h>
#define A  1000000//数字不能用空格隔开，否则会报错
#define B  2000000
#define C  4000000
#define D  6000000
#define E 10000000
int main()
{
	int i;
	double sum;
	printf("请输入当月利润：");
	scanf_s("%d", &i);
	if (i <= A)
		sum = i * 0.1;
	else if (i <= B)
		sum = A * 0.1 + (i - A) * 0.075;
	else if (i <= C)
		sum = A * 0.1 + (B - A) * 0.075 + (i - B) * 0.05;
	else if (i <= D)
		sum = A * 0.1 + (B - A) * 0.075 + (C - B) * 0.05 + (i - C) * 0.03;
	else if (i <= E)
		sum = A * 0.1 + (B - A) * 0.075 + (C - B) * 0.05 + (D - C) * 0.03 + (i - D) * 0.015;
	else
		sum = A * 0.1 + (B - A) * 0.075 + (C - B) * 0.05 + (D - C) * 0.03 + (E - D) * 0.015 + (i - E) * 0.01;
	printf("奖金为%lf元", sum);
	return 0;
}