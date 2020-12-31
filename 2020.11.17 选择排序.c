#include<stdio.h>
int main()
{
	int a[10] = { 4,85,3,234,45,345,345,122,30,12 };
	/*int m = 0;
	while (m < 10)
	{
		scanf_s("%d", &a[m]);
		m++;
	}*/
	for (int i = 0; i < 9; i++)
	{
		int k = i;
		for (int j = i + 1; j <= 9; j++)
		{
			if (a[j] < a[k])
				k = j;
		}
		if (k != i)
		{
			int t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	int n = 0;
	while (n < 10)
	{
		printf("%d\n", a[n]);
		n++;
	}
	return 0;
}