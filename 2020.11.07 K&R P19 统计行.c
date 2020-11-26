#include<stdio.h>
//无法在CMD中正常运行
//2020.11.26：CMD中 Ctrl+Z 作为 EOF
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