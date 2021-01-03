#include <stdio.h>
#include <stdilb.h>

int main()
{
	FILE* fp = NULL;
	char ch;
	fopen_s(&fp, "test.txt", "w+");
	printf("请输入一个字符串（以#结束）：\n");
	while ((ch = getchar()) != '#') {
		fputc(ch, fp);
		putchar(ch);
	}
	fclose(fp);
	return 0;
}