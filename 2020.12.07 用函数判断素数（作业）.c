#include <stdio.h>
#include <math.h>
int isPrime(int x);							//声明函数
int main()
{
	while (1) {								//循环永远成立，使程序可以多次判断
		printf("请输入要判断的数： \n");		//输出使用说明
		int x;								//定义整型变量x
		scanf_s("%d", &x);					//输入x的值
		if (isPrime(x)) printf("是素数\n");	//调用函数
		else printf("不是素数\n");			//判断是否为素数
	}
	return 0;
}
int isPrime(int x)
{
	if (x == 1) {							// 1 不是质数
		return 0;							//返回值为0
	}
	else {
		for (int y = 2; y <= sqrt(x); y++) {
			if (x % y == 0) return 0;		//有因数，不是质数，返回值为0
		}
	}										//是质数则返回1
	return 1;
}