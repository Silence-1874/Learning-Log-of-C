#include <stdio.h>
int main()
{
	char* month[13] = { "不存在","January","Feburary",	//定义指针数组，储存12个月（month[0]不存在）
		"March","April","May","June","July","August",
		"September","October","November","December" };
	printf("请输入月份的数字：");							//输出说明			
	int x;												//定义整型变量x
	scanf_s("%d", &x);									//输入月份数字
	if (x>0 && x<=13)									//判断数字合法
		printf("该月份的英文为%s", *(month+x));			//输出月份对应的英文单词
	return 0;
}