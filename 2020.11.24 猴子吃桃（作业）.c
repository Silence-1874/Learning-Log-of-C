#include <stdio.h>
int main()
{
	int n = 1;
	int x = 0;
	for (int i = 1; i < 10; i++)
	{
		x =(n+1)*2;						//计算前一天桃子数
		n = x;							//记录前一天桃子数
	}
	printf("第一天共摘了%d个桃子", x);
}