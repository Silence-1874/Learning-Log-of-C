#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	while (1) {
		int x, is;
		is = 1;
		scanf("%d", &x);
		int y;
		if (x == 1) is = 0;
		else if (x == 2) is = 1;
		else {
			for (y = 2; y <= sqrt(x); y++) {
				if (x % y == 0) {
					is = 0;
					break;
				}
			}
		}
		if (is) {
			FILE* fp;
			if ((fp = fopen("txt", "a")) == NULL) {
				printf("打开失败");
				exit(0);
			}
			fprintf(fp, "%d ", x);
			fclose(fp);
		}
	}
	return 0;
}