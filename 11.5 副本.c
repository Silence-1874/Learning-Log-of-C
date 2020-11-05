#include<stdio.h>
//比较三个数中的最大值（冒泡排序）
int main()
{
	int a[3];
	scanf_s("%d %d %d", &a[0], &a[1], &a[2]);
	int i,t;
	for (i = 0; i < 2; i++)
	{
		if (a[i] > a[i+1])
		{
			t = a[i];
			a[i] = a[i+1];
			a[i+1] = t;
		}
	}
	for (i = 0; i <= 2; i++);
	{
		printf("%d\t%d\t%d\t", a[0],a[1],a[2]);
	}
	return 0;
}