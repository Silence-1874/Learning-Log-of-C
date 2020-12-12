void BFS(Vertex V)
{
	visited[V] = true;
	Enqueue(V, Q);
	while (!IsEmpty(Q)) {
		V = Dequeue(Q);
		for (V 的每个邻接点 W)
			if (!visited[W]) {
				visited[W] = true;
				Enqueue[W, Q];
			}
	}
}