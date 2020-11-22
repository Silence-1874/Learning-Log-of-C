#include<stdio.h>
//打印华氏度转摄氏度对照表（for语句）（K&R P13）
int main()
{
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}