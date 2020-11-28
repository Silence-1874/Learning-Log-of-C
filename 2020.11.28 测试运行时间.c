#include <stdio.h>
#include <time.h>
clock_t start, stop;
double duration;
int main()
{
	start = clock();
	//要测试的代码放在这里
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	return 0;
}