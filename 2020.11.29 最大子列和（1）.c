#include <stdio.h>
int main()	//三个for语句，T(N)=O(N^3)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n=10,i=0,j=0,k=0;
	int now = 0, max = 0;
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			now = 0;
			for (k = i; k <= j; k++) {
				now += arr[k];
				if (now > max) max = now;
			}
		}
	}
	printf("最大子列和为%d", max);
	return 0;
}