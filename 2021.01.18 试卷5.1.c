#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
int main()
{
	char un[20], pw[20], unx[20], pwx[20];
	scanf("%s", un);
	scanf("%s", pw);
	int n;
	for (n = 1; n <= 3; n++) {
		printf("请输入用户名:\n");
		scanf("%s", unx);
		printf("请输入密码:\n");
		scanf("%s", pwx);
		if (strcmp(pw, pwx) == 0 && strcmp(un, unx) == 0 && n <= 3) {
			printf("验证通过！");
			break;
		} else if (n != 3) {
			printf("输入错误，请重新输入\n");
		} else {
			printf("账户已冻结，无法再输入。");
			break;
		}
	}
	return 0;
}