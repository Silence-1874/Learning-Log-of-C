#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char str[20];
	scanf("%s", str);
	char* pstr = str;
	void ivs(char*);
	ivs(pstr);
	return 0;
}
void ivs(char* p)
{
	char* p0 = p;
	while (*(p + 1) != '\0') {
		p++;
	}
	while (p != p0) {
		putchar(*p);
		p--;
	}
	putchar(*p);
}