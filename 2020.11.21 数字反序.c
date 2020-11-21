#include<stdio.h>
int main()
{
	int x=0;
	printf("请输入一个末位不为0的整数：");
	scanf_s("%d", &x);
	int m = x, n = 0;
	while (m>0)
	{
		n = n * 10 + m % 10;
		m /= 10;
	}
	printf("%d 反序后为 %d", x, n);
	return 0;
}