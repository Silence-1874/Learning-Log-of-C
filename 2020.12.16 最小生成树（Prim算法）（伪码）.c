#include <stdio.h>
void Prim()
{
	MST = { s };
	while (1) {
		V = 未收录顶点中dist最小者;
		if (这样的V不存在)
			break;
		dist[V] = 0;			//将V收录进MST
		for (V 的每个邻接点 W)
			if (dist[W] != 0)
				if (E<V, W> < dist[W]) {
					dist[W] = E<V, W>;
					parent[W] = V;
				}
	}
	if (MST中的顶点不到 |V| 个)
		Error(“生成树不存在”);
}