#include <stdio.h>
void mystrcpy(char* s, char* t)
{
	while ((*s++ = *t++) != '\0')
		;
}