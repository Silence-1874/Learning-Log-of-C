#include<stdio.h>
//数组名是这个数组的首地址，首地址是一段内存中第一个存储单元的地址
//a指向a[0]  &a指向整个数组
//指针变量的加减以指针所指向的类型空间为单位进行偏移
//数组名a不可改变
//一维数组元素的几种取法
/* 下标法
int main()
{
	int a[5] = { 1,2,3,4,5 };
	for (int i = 0;i < 5; i++) 
		printf("%d ", a[i]);
	return 0;
}
*/ 
/*指针法(不改变p的值）（p可以用a代替）
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	for (int i = 0; i < 5; i++)
		printf("%d ", *(p + i));
	return 0;
}
*/
/*指针法（改变了p的值）（p不能用a代替）
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	for (int i = 0; i < 5; i++)
		printf("%d ", *p++);
	return 0;
}
*/