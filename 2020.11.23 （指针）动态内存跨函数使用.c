#include<stdio.h>
#include<stdlib.h>
void f(int** a)
{
	*a = (int*)malloc(sizeof(int));
	**a = 5;
}
int main()
{
	int* b;
	f(&b);
	printf("%d\n", *b);
	return 0;
}