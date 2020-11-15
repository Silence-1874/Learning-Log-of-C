#include<stdio.h>
char* mystrcpy(char* dest, char* src);
int main()
{
	char s[10];
	mystrcpy(s, "silence");
	printf("%s\n", s);
	return 0;
}
char* mystrcpy(char* dest, char* src)
{
	char* pdest = dest;
	char* psrc = src;
	while (*psrc != '\0') {
		*pdest = *psrc;
		pdest++; psrc++;
	}
	*pdest = '\0';
	return dest;
}