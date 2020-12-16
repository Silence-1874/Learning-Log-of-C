#include<stdio.h>
#include<stdlib.h>

void input(int*, int);	//声明输入函数input
void output(int*, int);	//声明输出函数output
void inverse(int*, int);//声明逆序函数inverse

int main()
{
	printf("请输入n的值：");	//输出说明
	int n;					//定义整型变量
	scanf_s("%d", &n);		//输入n的值
	int* a = (int*)malloc(sizeof(int) * n);
							//申请长度为n的内存空间，作为数组a使用
	printf("请输入%d个数：\n", n);
	input(a, n);			//调用input函数
	inverse(a, n);			//调用inverse函数
	output(a, n);			//调用output函数
	return 0;
}
void inverse(int* a, int n)
{
	int t;
	for (int i = 0; i < n / 2; i++) {
		t = *(a + i);				//a[i]对应的元素为a[n-1-i]
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = t;
	}

}
void input(int* a, int n)
{
	for (int i = 0; i < n; i++)
		scanf_s("%d", a + i);		//输入数
}
void output(int* a, int n)
{
	printf("经处理后的数为：\n");		//输出说明
	for (int i = 0; i < n; i++)
		printf("%d ", *(a + i));	//输出数
}