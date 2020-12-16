#include <stdio.h>
void TopSort()
{
	for (图中的每个顶点 V)
		if (Indegree[V] == 0)
			Enqueue(V, Q);
	while (!Is(Empty[Q])) {
		V = Dequeue(Q);
		输出V，或者记录V的输出序号;
		cnt++;
		for (V 的每个邻接点 W)
			if (--Indegree[W] == 0)
				Enqueue(W, Q);
	}
	if (cnt != |V|)
		Error("图中有回路")
}