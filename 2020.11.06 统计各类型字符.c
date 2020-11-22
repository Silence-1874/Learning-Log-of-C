#include<stdio.h>
//统计各类型字符
int main()
{
	char c;
	//scanf("%s", &c);
	int letters = 0, space = 0, digit = 0, other = 0;
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;
		else if (c == ' ')space++;
		else if (c >= '0' && c <= '9')digit++;
		else other++;
	}
	printf("%d %d %d %d\n", letters, digit, space, other);
	return 0;
}