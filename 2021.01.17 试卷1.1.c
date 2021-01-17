#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
int main()
{
	srand((int)time(0));
	int* a;
	a = (int*)malloc(10 * sizeof(int));
	for (int i = 0; i < 10; i++) {
		int x = rand();
		if (x > 0 && x < 100) {
			*(a + i) = x;
			printf("%d ", x);
		} else {
			i--;
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
 			if (*(a + j) < *(a + j + 1)) {
				int t = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = t;
			}
		}
	}
	putchar('\n');
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(a + i));
	}
	return 0;
}