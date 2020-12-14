#include <stdio.h>
#include<stdlib.h>

#define MaxVertexNum 10
#define WeightType int
#define Vertex int 

typedef struct AdjVNode {
	Vertex AdjV;
	WeightType Weight;
	struct AdjVNode * Next;
} * PtrToAdjVNode;

typedef struct VNode {
	PtrToAdjVNode FirstEdge;
	int Data;
}AdjList[MaxVertexNum];

typedef struct GNode {
	int Nv;
	int Ne;
	AdjList G;		//邻接表
}* PtrToGNode;
typedef PtrToGNode LGraph;

typedef struct ENode {
	Vertex V1, V2;				//一条边的两端
	WeightType Weight;			//权重
} *PtrToENode;
typedef PtrToENode Edge;

LGraph CreateGraph(int);
LGraph BuildGraph();
void InsertEdge(LGraph, Edge);

int main()
{
	BuildGraph();
	return 0;
}

LGraph CreateGraph(int VertexNum)
{
	Vertex V, W;
	LGraph Graph;

	Graph = (LGraph)malloc(sizeof(struct GNode));
	Graph->Nv = VertexNum;
	Graph->Ne = 0;

	for(V = 0; V<Graph->Nv;V++)
		Graph->G[V].FirstEdge = NULL;
	return Graph;
}

LGraph BuildGraph()
{
	LGraph Graph;
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

	return Graph;
}

void InsertEdge(LGraph Graph, Edge E)
{
	PtrToAdjVNode NewNode;

	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
	NewNode->AdjV = E->V2;
	NewNode->Weight = E->Weight;

	NewNode->Next = Graph->G[E->V1].FirstEdge;
	Graph->G[E->V1].FirstEdge = NewNode;

	//无向图还要插入边<V2,V1>
	NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
	NewNode->AdjV = E->V1;
	NewNode->Weight = E->Weight;

	NewNode->Next = Graph->G[E->V2].FirstEdge;
	Graph->G[E->V2].FirstEdge = NewNode;

}