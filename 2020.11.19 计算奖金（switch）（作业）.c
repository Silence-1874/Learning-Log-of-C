#include<stdio.h>
#define A  1000000//数字不能用空格隔开，否则会报错
#define B  2000000
#define C  4000000
#define D  6000000
#define E 10000000
int main()
{
	int i,x;
	double sum;
	printf("请输入当月利润：");
	scanf_s("%d", &i);
	x = i / A;
	switch (x)
	{
	case 0:
		sum = i * 0.1;
		break;
	case 1:
		sum = A * 0.1 + (i - A) * 0.075;
		break;
	case 2:
	case 3:
		sum = A * 0.1 + (B - A) * 0.075 + (i - B) * 0.05;
		break;
	case 4:
	case 5:
		sum = A * 0.1 + (B - A) * 0.075 + (C - B) * 0.05 + (i - C) * 0.03;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		sum = A * 0.1 + (B - A) * 0.075 + (C - B) * 0.05 + (D - C) * 0.03 + (i - D) * 0.015;
		break;
	default:
		sum = A * 0.1 + (B - A) * 0.075 + (C - B) * 0.05 + (D - C) * 0.03 + (E - D) * 0.015 + (i - E) * 0.01;
	}
	printf("奖金为%lf元", sum);
	return 0;
}