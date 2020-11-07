#include<stdio.h>
int main()
{
	double nc;
	for (nc = 0; getchar() != '\n'; ++nc)//此句原文为 for (nc = 0; getchar() != EOF; ++nc) 经编译无法正常统计，故改之
		;
	printf("%.0f\n", nc);
	return 0;
}