#include <stdio.h>
#include<stdlib.h>
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

	printf("请输入要插入的数以及要插入的位置： ");
	int x, n;
	scanf_s("%d %d", &x, &n);

	if (List[List[0].cur].data == 0) {
		List[List[0].cur].data = x;
		List[List[0].cur].cur = List[n - 1].cur;
		List[n-1].cur = List[0].cur;
	}

	for (int j = 1; List[j].data; j = List[j].cur) {	
		printf("%d\n", List[j].data);
	}
}