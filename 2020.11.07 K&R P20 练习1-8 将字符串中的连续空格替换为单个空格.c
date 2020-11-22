#include<stdio.h>
int main()
{
	char c;
	char lastc=1;//将变量lastc初始化为一个任意的非空格变量
	while ((c = getchar()) != '\n')
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ' && lastc != ' ')
			putchar(' ');
		lastc = c;
	}
	return 0;
}
//纯自己想出来的，挺有成就感的，这就是算法的美妙之处吧