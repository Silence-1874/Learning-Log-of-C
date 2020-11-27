#include <stdio.h>
int main()
{
	//1.声明类型，再定义变量
	//  p1,p2都是point 里面有x和y的值
	struct point
	{
		int x;
		int y;
	};
	struct point p1, p2;
	//2.声明类型同时定义变量
	//  p1,p2都是point 里面有x和y的值
	struct point
	{
		int x;
		int y;
	} p1, p2;
	//3.不指定类型名
	//  p1,p2都是一种无名结构 里面有x和y的值
	struct
	{
		int x;
		int y;
	}; p1, p2;
}