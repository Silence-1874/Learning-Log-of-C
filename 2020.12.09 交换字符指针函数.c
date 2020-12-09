#include <stdio.h>
void SwapCharPointer(char*, char*);
int main()
{
	char* s1 = "teacher";
	char* s2 = "student";
	printf("s1=%s\ns2=%s\n", s1, s2);
	SwapCharPointer(&s1, &s2);
	printf("s1=%s\ns2=%s\n", s1, s2);
	return 0;
}
void SwapCharPointer(char** p, char** q)
{
	char *t;
	t = *p;
	*p = *q;
	*q = t;
}