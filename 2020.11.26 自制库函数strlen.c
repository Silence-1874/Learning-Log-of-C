#include <stdio.h>
int mystrlen(char* s)
{
	int cnt=0;
	while ( s[cnt]!= '\0')
	{
		cnt ++;
	}
	return cnt;
}
int main()
{
	char s[] = "我有几个字符?";
	printf("%d", mystrlen(s));
	return 0;
}