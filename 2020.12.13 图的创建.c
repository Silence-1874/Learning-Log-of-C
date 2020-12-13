#include <stdio.h>
#include<stdlib.h>

#define MaxVertexNum 10
#define WeightType int

typedef int Vertex;				//用顶点下标表示顶点，为整型
typedef struct GNode {
	int Nv;						//顶点数
	int Ne;						//边数
	int G[MaxVertexNum][MaxVertexNum];
	int data[MaxVertexNum];		//储存顶点数据
} * PtrToGNode;
typedef PtrToGNode MGraph;

typedef struct ENode {
	Vertex V1,V2;				//一条边的两端
	WeightType Weight;			//权重
} * PtrToENode;
typedef PtrToENode Edge;

MGraph CreateGraph(int);		//初始化图
MGraph BuildGraph();			//创建图
void InsertEdge(MGraph, Edge);	//插入边

int main()
{
	BuildGraph();
	return 0;
}

MGraph CreateGraph(int VertexNum)
{
	Vertex V, W;
	MGraph Graph;

	Graph = (MGraph)malloc(sizeof(struct GNode));
	Graph->Nv = VertexNum;
	Graph->Ne = 0;

	for (V = 0; V < Graph->Nv; V++)
		for (W = 0; W < Graph->Nv; W++)
			Graph->G[V][W] = INFINITY;
	return Graph;
}

MGraph BuildGraph()
{
	MGraph Graph;
	Edge E;
	Vertex V;
	int Nv, i;

	printf("请输入顶点数：");
	scanf_s("%d", &Nv);
	Graph = CreateGraph(Nv);
	printf("请输入边数：");
	scanf_s("%d", &(Graph->Ne));

	if (Graph->Ne != 0) {
		E = (Edge)malloc(sizeof(struct ENode));
		for (i = 0; i < Graph->Ne; i++) {
			printf("请输入边的两个顶点以及权重：");
			scanf_s("%d %d %d", &(E->V1), &(E->V2), &(E->Weight));
			InsertEdge(Graph, E);
		}
	}

	for (V = 0; V < Graph->Nv; V++) {
		printf("请输入顶点的数据：");
		scanf_s("%d", &(Graph->data[V]));
	}
	return Graph;
}

void InsertEdge(MGraph Graph, Edge E)
{
	Graph->G[E->V1][E->V2] = E->Weight;		//插入边<V1,V2>
	Graph->G[E->V2][E->V1] = E->Weight;		//无向图还需要插入边<V2,V2>
}