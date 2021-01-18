#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
int main()
{
	char str1[20], str2[20] = { 0 };
	char* p1, * p2;
	scanf("%s", str1);
	p1 = str1;
	p2 = str2;
	for (; *p1 != '\0'; p1++, p2++) {
		*p2 = *p1;
	}
	char name[10];
	scanf("%s", name);
	
	FILE* fp;
	if ((fp = fopen(name, "w")) == NULL) {
		printf("打开失败");
		exit(0);
	}
	fputs(str2, fp);
	fclose(fp);
	return 0;
}