#include<stdio.h>
int main()
{
	int h = 10;
	double x1 = 2, y1 = 2;
	double x2 = -2, y2 = 2;
	double x3 = -2, y3 = -2;
	double x4 = 2, y4 = -2;
	double x, y;
	double d1, d2, d3, d4;
	printf("请输入点的坐标，用逗号隔开:");
	scanf_s("%lf，%lf", &x, &y);
	d1 = (x - x4) * (x - x4) + (y - y4) * (y - y4);			//求距离
	d2 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
	d3 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
	d4 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1)				//判断点是否在塔外
		h = 0;		
	printf("该点高度为 %d\n", h);
	return 0;
}