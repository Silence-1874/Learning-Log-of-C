#include<stdio.h>

#define N 5

void f(int*);		//声明处理函数f
void input(int*);	//声明输入函数input
void output(int*);	//声明输出函数output

int main()
{
	int m[N][N];	//定义矩阵
	input(m);		//调用input函数输入矩阵
	printf("原始矩阵为：\n");
	output(m);		//调用output函数输出原始矩阵
	f(m);			//调用f函数处理矩阵
	printf("处理后的矩阵为：\n");
	output(m);		//调用output函数输出处理后的矩阵
}
void f(int* m)
{
	int i, j;
	int maxi = N / 2;											//假设中心元素最大
	int maxj = N / 2;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			if (*(m + i * N + j) > *(m + maxi * N + maxj)) {	//若有比max大的数
				maxi = i;										//将maxi,maxj更新为此数的下标
				maxj = j;
			}
	}
	int t = *(m + maxi * N + maxj);								//将最大数与中心元素数交换
	*(m + maxi * N + maxj) = *(m + (N / 2) * N + N / 2);
	*(m + (N / 2) * N + N / 2) = t;

	int mini = 0;												//假设左上角元素最小
	int minj = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			if (*(m + i * N + j) < *(m + mini * N + minj)) {	//若有比min小的数
				mini = i;										//将mini,minj更新为此数的下标
				minj = j;
			}
	}
	t = *(m + mini * N + minj);									//将最小数与左上角元素数交换
	*(m + mini * N + minj) = *(m + 0 * N + 0);
	*(m + 0 * N + 0) = t;

	printf("\n");
	output(m);
	printf("\n");

	mini = 0;													//假设右上角元素第二小
	minj = N - 1;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			if (*(m + i * N + j) < *(m + mini * N + minj) && *(m + i * N + j) > *(m + 0 * N + 0)) {
																//若有比min小的数且大于最小的数
				mini = i;										//将mini,minj更新为此数的下标
				minj = j;
			}
	}
	t = *(m + mini * N + minj);									//将最第二小数与右上角元素数交换
	*(m + mini * N + minj) = *(m + 0 * N + N - 1);
	*(m + 0 * N + N - 1) = t;

	mini = N - 1;												//假设左下角元素第三小
	minj = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			if (*(m + i * N + j) < *(m + mini * N + minj) && *(m + i * N + j) > *(m + 0 * N + N - 1)) {
																//若有比min小的数且大于第二小的数
				mini = i;										//将mini,minj更新为此数的下标
				minj = j;
			}
	}
	t = *(m + mini * N + minj);									//将最第三小数与左下角元素数交换
	*(m + mini * N + minj) = *(m + (N - 1) * N + 0);
	*(m + (N - 1) * N + 0) = t;

	mini = N - 1;												//假设右下角元素第四小
	minj = N - 1;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			if (*(m + i * N + j) < *(m + mini * N + minj) && *(m + i * N + j) > *(m + (N - 1) * N + 0)) {
																//若有比min小的数且大于第三小的数
				mini = i;										//将mini,minj更新为此数的下标
				minj = j;
			}
	}
	t = *(m + mini * N + minj);									//将最第四小数与右下角元素数交换
	*(m + mini * N + minj) = *(m + (N - 1) * N + N - 1);
	*(m + (N - 1) * N + N - 1) = t;
}
void input(int* m)
{
	printf("请输入矩阵的%d个元素：\n", N * N);
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf_s("%d", m + i * N + j);
}

void output(int* m)
{
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", *(m + i * N + j));
		printf("\n");
	}
}