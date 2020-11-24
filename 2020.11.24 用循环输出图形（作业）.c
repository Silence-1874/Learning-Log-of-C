#include<stdio.h>
int main()
{
	char str[] = "   *   ";						//定义字符串
	printf("%s\n", str);						//输出第一行
	for (int i = 1; i <= 3; i++)				//第一个大循环输出前四行
	{
		for (int j = 3 - i; j <= 3 + i; j++)	//利用循环
		{										//通过改变将'*'的数量
			str[j] = '*';						//来达到输出目的
		}
		printf("%s\n", str);					//输出每一行
	}
	for (int i = 0; i <= 2; i++)				//第二个大循环输出后三行
	{											//利用循环
		str[i] = ' ';							//通过将最外侧两个'*'改成' '
		str[6 - i] = ' ';						//来打到输出目的
		printf("%s\n", str);					//输出每一行
	}
	return 0;
}