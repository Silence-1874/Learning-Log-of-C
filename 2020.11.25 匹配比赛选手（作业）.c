#include <stdio.h>
int main()
{
	char x, y, z;
	for (x = 'X'; x <= 'Z'; x++)							//遍历所有情况
	{ 
		for (y = 'X'; y <= 'Z'; y++)
		{
			for (z = 'X'; z <= 'Z'; z++)
			{
				if (x != y && x != z && y != z)				//在遍历所有情况前不进行输出
				{
					if (x != 'X' && z != 'X' && z != 'Z')	//检查是否符合题意
					{
						printf("A VS %c\n", x);				//输出结果
						printf("B VS %c\n", y);
						printf("C VS %c\n", z);
					}
				}
			}
		}
	}
	return 0;
}