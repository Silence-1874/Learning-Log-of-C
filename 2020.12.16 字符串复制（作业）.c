#inlucde <stdio.h>
#include <stdlib.h>
void lstrcpy(int,char*,char*);					//声明lstrcpy函数
int main()
{
	printf("请输入m的大小: \n");					//输出说明
	int m;										//定义整型变量m
	scanf_s("%d", &m);							//输入m
	char* str = (char*)malloc(sizeof(char) * (m + 1));
												//申请大小为m+1的空间，存放字符串str
	printf("请输入m个字符：\n");					//输出说明
	scanf_s("%s", str, m + 1);					//输入str

	printf("str = %s", str);					//输出str
	printf("\n请输入开始复制的位置：\n");			//输出说明
	int n;										//定义整型变量n
	scanf_s("%d", &n);							//输入n
	char* ans = (char*)malloc(sizeof(char) * (m + 1 - n + 1));
												//申请大小为m+1-n+1的空间，存放字符串ans

	lstrcpy(n, str, ans);						//调用lstrcpy函数
	ans[m + 1 - n] = '\0';						//在ans结尾添加字符串结束标志
	puts(ans);									//输出字符串


	free(str);									//释放申请的空间
	free(ans);

	return 0;
}