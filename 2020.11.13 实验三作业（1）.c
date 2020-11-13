#include<stdio.h>
#include<math.h>					//为获取更精确的结果
int main()
{
	double d,p,r,m;					//定义局部变量d，p，r，m
	d = 300000;					//初始化d
	p = 6000;					//初始化p
	r = 0.01;					//初始化r
	m = log10(p /( p - d * r)) /log10 (1 + r);	//计算m
	printf("%.1lf月能还清",m); 			    //输出结果
	return 0;
}
