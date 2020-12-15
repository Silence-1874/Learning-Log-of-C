#include <stdio.h>
typedef int Vertex;
void Unweighted(Vertex S)
{
	int dist[VertextNum];		//dist记录点到起点的最短距离	
	Vertex path[VertextNum];	//path记录S到W的路径
	Vertex W, V, Q;
	Enqueue(S, Q);
	while (!IsEmpty(Q)) {
		V = Dequeue(Q);
		for(V 的每个邻接点 W)
			if (dist[W] == -1) {
				dist[W] = dist[V] + 1;
				path[W] = V;
				Enqueue(W, Q);
			}
	}
}