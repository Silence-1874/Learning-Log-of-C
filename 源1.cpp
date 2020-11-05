#include<stdio.h>
int main()
{
	int y, w = 0, n = 0, a[5], j;
	scanf_s("%d", &y);
	if (y == 0)w = 1; a[w] = 0;
	while (y > 0)
	{
		w++;
		//n = n * 10 + y % 10;
		a[w] = y % 10;
		y = y / 10;
	}
	printf("%d\n", w);
	for (j = w; j > 1; j--)
		printf("%d ", a[j]);
	if (j = 1)printf("%d\n", a[j]);
	for(j=1;j<=w;j++)printf("%d", a[j]);
	return 0;
}