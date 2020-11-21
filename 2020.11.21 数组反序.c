#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int j, i;
	int t = 0;
	for (i = 0, j = 4; i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	for (i = 0; i < 5; i++)
		printf("%d\n", a[i]);
	return 0;
}