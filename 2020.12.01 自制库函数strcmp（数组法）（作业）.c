#include <stdio.h>
int main()
{
	int n = 0;
	int** triangle;									//定义二级指针
	printf("请输入要打印的行数:\n");					//输出使用说明
	scanf_s("%d", &n);								//用户设定打印的行数
	triangle = (int**)malloc(sizeof(int*) * n);		//申请一组一维指针空间
	for (int i = 0; i < n; i++)
		triangle[i] = (int*)malloc(sizeof(int) * n);//对于每个一维指针，申请一行数据的空间,以创建动态二维数组
	for (int i = 0; i < n; i++) {					//遍历数组，并将所有元素赋值为1
		for (int j = 0; j <= i; j++) {
			triangle[i][j] = 1;
		}
	}
	for (int i = 2; i < n; i++) {					//循环变量i控制行数,前两行都是1，故从第三行开始处理
		for (int j = 1; j < i; j++) {				//循环变量控制一行中的元素个数（列数），头尾都是1，故不处理头尾
			*(*(triangle + i) + j) = *(*(triangle + i - 1) + j) + *(*(triangle + i - 1) + j - 1);
		}											//根据杨辉三角的性质，某个元素等于它“上面的”元素，加它“左上角”的元素
	}
	for (int i = 0; i < n; i++) {					//遍历数组，并输出结果
		for (int j = 0; j <= i; j++) {
			printf("%d\t", triangle[i][j]);
		}
		printf("\n");
	}
	return 0;
}
