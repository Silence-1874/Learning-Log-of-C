//#define _CRT_SECURE_NO_WARNINGS	//关闭安全警告以适应谭浩强书上的版本
#include <stdio.h>
#define N 5							//定义输入的字符串行数

int main()
{
	FILE* fp;						//定义文件指针fp
	char str[N][10];				//定义字符串数组str
	fopen_s(&fp, "test.text", "w");	//以只写的方式打开文件test.text，没有则新建该文件
	//fp = fopen("test.text", "w");	
	for (int i = 0; i < N; i++) {
		gets_s(str + i, 10);		//输入字符串
		fputs(str + i, fp);			//存入文件
		fputc('\n', fp);			//向文件存入换行符
	}
	fclose(fp);
	printf("————————————————\n");	//输出分隔符
	fopen_s(&fp, "test.text", "r");	//以只读的方式打开文件
	//fp = fopen("test.text", "r");	
	char c;
	while ((c = fgetc(fp)) != EOF) {
		if (c >= 'a' && c <= 'z') {
			c -= 32;				//大写字母转小写字母
		}
		printf("%c", c);			//输出字符
	}
	fclose(fp);						//关闭文件
	return 0;
}