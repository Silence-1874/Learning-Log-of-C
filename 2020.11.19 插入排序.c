#include<stdio.h>
int main()
{
	int m, n, i, j, t, h, add;
	h = m = n= t = 0;
	int a[10] = { 0 };//{ 1,7,8,17,23,24,59,62,101 };
	while (m < 9)
	{
		scanf_s("%d", &a[m]);
		m++;
	}
	scanf_s("%d", &add);
	//add = 50;
	for (i = 9; i > 0; i--)
	{
		if (add > a[i - 1])
		{
			t = i;
			break;
		}
	}
	for (j = 9; j > t; j--)
	{
		a[j] = a[j - 1];
	}
	a[t] = add;
	while (n < 10)
	{
		printf("%d\n", a[n]);
		n++;
	}
	return 0;
}