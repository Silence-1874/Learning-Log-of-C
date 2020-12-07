#include<stdio.h>
double pn(int, double);					//声明函数
int main()
{
	int n;								//定义整型变量n，储存阶数
	double x;							//定义双精度浮点型变量，储存自变量
	printf("请输入要求的阶数以及自变量:");	//输出使用说明
	scanf_s("%d %lf", &n, &x);			//输入阶数和自变量
	printf("自变量为%.lf的%d阶勒让德多项式的值为 %lf", x, n, pn(n, x)); //输出结果
	return 0;
}
double pn(int n, double x)
{
	if (n == 0) return 1;				//计算1阶多项式
	else if (n == 1) return x;			//计算2阶多项式
	else return ((2 * n - 1) * x * pn(n - 1, x) - (n - 1) * pn(n - 2, x)) / n;
}										//递归计算n阶多项式