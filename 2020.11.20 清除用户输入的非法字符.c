#include<stdio.h>
int main()
{
	int i;
	char ch;
	scanf_s("%d", &i);
	printf("i=%d\n", i);
	while ((ch = getchar()) != '\n')
		continue;		//continue 也可以去掉，用空语句
	int j;
	scanf_s("%d", &j);
	printf("j=%d\n", j);
	return 0;
}