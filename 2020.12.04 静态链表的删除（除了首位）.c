#include <stdio.h>
#define MAXSIZE 100
int main()
{
	typedef struct {
		int data;
		int cur;
	}Node;

	Node List[MAXSIZE];
	for (int i = 0; i < MAXSIZE - 1; i++) {
		List[i].cur = i + 1;
		List[i].data = 0;
	}
	List[MAXSIZE - 1].cur = 0;
	List[MAXSIZE - 1].data = 0;

	int i = 1;
	for (; i <= 10; i = List[i].cur) {
		List[i].data = i;
	}
	List[0].cur = i + 1;
	List[i].data = 0;

	printf("请输入要删除的元素序号： ");
	int n;
	scanf_s("%d", &n);
	int cnt = 1, last = 1;
	int j = 1;
	for (; List[j].data; j = List[j].cur) {
		if (cnt == n) {
			List[last].cur = List[j].cur;
			break;
		}
		last = j;
		cnt ++;
	}
	
	List[j].data = 0;
	List[j].cur = List[0].cur;
	List[0].cur = j;

	for (int j = 1; List[j].data; j = List[j].cur) {
		printf("%d\n", List[j].data);
	}
}