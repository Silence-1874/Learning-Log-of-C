#include<stdio.h>
int main()
{
	int t=0, m=0, n=0, i, j;
	int a[10] = { 4,85,3,234,45,345,345,122,30,12 };
	/*while (m < 10)
	{
		scanf_s("%d", &a[m]);
		m++;
	}*/
	for (j = 0; j < 10; j++)
	{
		for (i = j; i < 10; i++)
		{
			int k = j;
			if (a[i] < a[j])
				k = i;
			if (k != j)
			{
				t = a[j];
				a[j] = a[k];
				a[k] = t;
			}
		}
	}
	while (n < 10)
	{
		printf("%d\n", a[n]);
		n++;
	}
	return 0;
}
