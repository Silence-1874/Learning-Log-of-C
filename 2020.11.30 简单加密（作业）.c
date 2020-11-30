#include <stdio.h>
#include <ctype.h>											//引入C标准库中的头文件ctype.h
int main()
{
	int i = 0;
	char pw[100];											//字符串pw储存密码
	char aw[100];											//字符串aw储存明文
	printf("请输入密码:");									//输出使用说明
	gets(pw);												//输入密码
	printf("密码【%s】\n明文【", pw);							//输出密码
	while (pw[i] != '\0') {									//遇到字符串结束符前继续翻译
		if (isupper(pw[i])) aw[i] = 'A' + 'Z' - pw[i];		//翻译大写字母
		else if (islower(pw[i])) aw[i] = 'a' + 'z' - pw[i];	//翻译小写字母
		else aw[i] = pw[i];									//非字母不变
		i++;
	}
	for (int j = 0; j < i; j++) {							//输出明文
		printf("%c", aw[j]);
	}
	printf("】\n");
	return 0;
}