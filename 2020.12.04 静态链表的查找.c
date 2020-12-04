#include <stdio.h>
#define MAXSIZE 100
int main()
{
	typedef struct {
		int data;
		int cur;
	}Node;
	Node List[MAXSIZE];
	for (int i = 0; i <= MAXSIZE - 1; i++) {
		List[i].cur = i + 1;
		List[i].data = 0;
	}

	int i = 1;
	for (; i <= 10; i = List[i].cur) {
		List[i].data = i;
	}
	List[0].cur = i + 1;
	List[i].data = 0;

	printf("请输入要查找的数: ");
	int x;
	scanf_s("%d", &x);
	int cnt = 1;
	int isFound = 0;
	for (int j = 1; List[j].data; j = List[j].cur, cnt++) {
		if (List[j].data == x) {
			printf("查找的元素在第%d位", cnt);
			isFound = 1;
			break;
		}
	}
	if (!isFound) printf("查无此数");
	return 0;
}