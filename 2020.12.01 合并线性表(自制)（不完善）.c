#include <stdio.h>
int main()
{
	int L1[] = { 1,2,3,4,5,6,9,10 };
	int L2[] = { 1,3,6,7,8,10,11 };
	int n1 = 0, n2 = 0, n = 0;
	n1 = sizeof(L1) / sizeof(int);
	n2 = sizeof(L2) / sizeof(int);
	int* L;
	L = (int*)malloc(sizeof(int) * (n1 + n2));
	int n3 = n1 + n2;
	for (int i = 0; i < n3; i++) {
		L[i] = 0;
	}
	int i = 0, j = 0, k = 0;
	while (i <= n1 || j <= n2) {
		if (L1[i] < L2[j]) {
			L[k] = L1[i];
			i++;
		}
		else if (L1[i] > L2[j]) {
			L[k] = L2[j];
			j++;
		} else {
			L[k] = L1[i];
			i++;
			j++;
		}
		k++;
	}
	int m = 0;
	while (L[m]>0 && L[m] != 0 && m < n1 + n2) {
		printf("%d\n", L[m]);
		m++;
	}
	free(L);
	return 0;
}