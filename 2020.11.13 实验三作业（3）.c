int main()
{
	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';			//定义并初始化“China”
	c1 = c1 + 4;													//加密“C”
	c2 = c2 + 4;													//加密“h”
	c3 = c3 + 4;													//加密“i”
	c4 = c4 + 4;													//加密“n”
	c5 = c5 + 4;													//加密“a”
	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);						//用printf函数输出
	putchar(c1); putchar(c2); putchar(c3); putchar(c4); putchar(c5);//用putchar函数输出
}