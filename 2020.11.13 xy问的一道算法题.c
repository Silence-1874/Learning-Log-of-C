#include<stdio.h>
int main()
{
	double a, b, c, A = 0, B = 0, C = 0, sum;
	int i, j, h;
	//a = 100; b = 50; c = 10;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	for (i = 1; i <= a; i++)A += i;
	//printf("%.2lf\n", A);
	for (j = 1; j <= b; j++)B += j * j;
	//printf("%.2lf\n", B);
	for (h = 1; h <= c; h++)C += 1.0 / h;//若1.0改成1则C在输出时小数部分均为0
	//printf("%.2lf\n", C);
	sum = A + B + C;
	printf("%.2lf", sum);
	return 0;
}