#include <stdio.h>
#include<stdlib.h>

#define MAXN 10

int G[MAXN][MAXN], Nv, Ne;
void BuildGraph();

int main()
{
	BuildGraph();
	return 0;
}

void BuildGraph()
{
	int i, j, v1, v2, w;
	printf("请输入顶点数：");
	scanf_s("%d", &Nv);
	for (i = 0; i < Nv; i++)
		for (j = 0; j < Nv; j++)
			G[i][j] = 0;
	printf("请输入边数：");
	scanf_s("%d", &Ne);
	for (i = 0; i < Ne; i++) {
		printf("请输入边的两个顶点以及权重：");
		scanf_s("%d %d %d", &v1, &v2, &w);
		G[v1][v2] = w;
		G[v2][v1] = w;
	}
}