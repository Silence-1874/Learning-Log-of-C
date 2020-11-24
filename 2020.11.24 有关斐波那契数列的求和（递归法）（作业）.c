#include<stdio.h>
double Fibonacci1(int);									//声明分母数列
double Fibonacci2(int);									//声明分子数列
int main()
{
	double sum = 0;										//定义sum储存前n项和
	int n = 0;
	printf("请输入要求的项数:\n");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
	//printf("分子%lf，分母%lf\n", Fibonacci2(i), Fibonacci1(i));
		sum += Fibonacci2(i) / Fibonacci1(i);			//求和
	}
	printf("2/1+3/2+5/3+… 前%d项的和为:\n%lf", n, sum);	//输出
	return 0;
}
double Fibonacci1(int n)								//分子数列
{
	if (n <= 2) return n;								//前两项单独处理
	else return Fibonacci1(n - 1) + Fibonacci1(n - 2);	//递归法处理第三项及之后的项
}
double Fibonacci2(int n)								//分母数列
{
	if (n <= 2) return n + 1;							//前两项单独处理
	else return Fibonacci2(n - 1) + Fibonacci2(n - 2);	//递归法处理第三项及之后的项
}