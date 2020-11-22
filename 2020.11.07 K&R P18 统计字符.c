#include<stdio.h>
int main()
{
	long nc;
	nc = 0;
	while (getchar() != '\n')//此句原文为 while(getchar()!=EOF) 经编译无法正常统计，故改之
		++nc;
	printf("%ld\n", nc);
	return 0;
}