#include <stdio.h>
int main()	//两个for语句，T(N)=O(N^2)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 10, i = 0, j = 0;
	int now = 0, max = 0;
	for (i = 0; i <= n; i++) {
		now = 0;
		for (j = i; j <= n; j++) {
			now += arr[j];
			if (now > max) max = now;
		}
	}
	printf("最大子列和为%d", max);
	return 0;
}