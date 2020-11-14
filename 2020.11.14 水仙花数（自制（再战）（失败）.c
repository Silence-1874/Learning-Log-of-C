#include<stdio.h>
int power(int, int);
int main()
{
	int n, x, i, sum=0;
	scanf_s("%d", &n);
	int a[7], b[7];
	for (x = power(10, n - 1); x <= power(10, n) - 1; x++)
	{
		for (i = 0; i <= n; i++)
		{
			a[i] = x % 10;
			x = x/10;
			b[i] = power(a[i], n);
		}
		for (i = 0; i <= n; i++)
		{
			sum += b[i];
		}
		if (x == sum)printf("%d\n", x);
	}
}
int power(int a, int b)
{
	int i;
	for (i = 2; i <= b; i++)
		a *= a;
	return a;
}