#include <stdio.h>
typedef int Vertex;
void Dijkstra(Vertex s)
{
	Vertex V, W;
	while (1) {
		V = 未收录顶点中dist最小者;
		if (这样的 V 不存在)
			break;
		collected[V] = true;
		for(V 的每个邻接点 W)
			if (collected[W] == false)
				if (dist[V] + E<V, W> < dist[W]) {
					dist[W] = dist[V] + E<V, W>;
					path[W] = V;
				}
	}
}