#include<stdio.h>

void input(int*);	//声明输入函数input
void f(int*);		//声明处理函数f
void output(int*);	//声明输出函数output

int main()
{
	int arr[10];	//定义数组
	input(arr);		//调用input函数
	f(arr);			//调用f函数
	output(arr);	//调用output函数
	return 0;
}

void input(int* arr)
{
	printf("请输入10个数：\n");		//输出说明
	for (int i = 0; i < 10; i++)	//控制循环
		scanf_s("%d", arr + i);		//输入数
}

void f(int* arr)
{
	int min = *arr;						//假定第一个数最小，存入min
	int nmin = 0;						//nmin储存最小数的下标
	for (int i = 0; i < 10; i++) {
		if (*(arr + i) < *(arr + nmin))	//若有比min小的数
			nmin = i;					//将nmin更新为此数的下标
	}
	int t = *arr;						//将最小数与第一个数交换
	*arr = *(arr + nmin);
	*(arr + nmin) = t;

	int max = *(arr + 9);					//假定最后一个数最大，存入max
	int nmax = 9;						//nmax储存最大数的下标
	for (int i = 0; i < 10; i++) {
		if (*(arr + i) > *(arr + nmax))	//若有比max大的数
			nmax = i;					//将nmax更新为此数的下标
	}
	t = *(arr + 9);						//将最大数与最后一个数交换
	*(arr + 9) = *(arr + nmax);
	*(arr + nmax) = t;
}

void output(int* arr)
{
	printf("经处理后的数为：\n");		//输出说明
	for (int i = 0; i < 10; i++)	//控制循环
		printf("%d ", *(arr + i));	//输出数
}