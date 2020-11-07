#include<stdio.h>
//无法在CMD中正常运行
int main()
{
	int c, nl;
	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
	return 0;
}