#include <stdio.h>
int main()
{
	int flag = 0;							//flag记录是否找到第一个下标，使得对应字符串的元素不相等
											//flag同时用于记录输出结果
	int i = 0;								//i记录当前比较的元素的下标
	char str1[100];							//定义第一个字符串
	char str2[100];							//定义第二个字符串
	printf("请输入第一个字符串：\n");			//输出使用说明
	gets(str1);								//输入第一个字符串
	printf("请输入第二个字符串：\n");			//输出使用说明
	gets(str2);								//输入第二个字符串
	while (flag == 0 && str1[i] != '\0') {	//若对应元素不相等，且第一个字符串未读到结束符，循环继续
		flag = str1[i] - str2[i];			//计算差值
		i++;								//比较下一对元素
	}
	printf("%d", flag);						//输出结果
	return 0;
}
