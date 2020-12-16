#include <stdio.h>
void Kruskal()
{
	MST = { };
	while (MST中不到 | V | -1 条边 && E 中还有边) {
		从 E 中取一条权重最小的边E<V, W>;
		将E<V, W>从 E 中删除;
		if (E<V, W>不在MST中构成回路)
			将E<E, W>加入MST;
		else
			彻底无视E<V, W>;
	}
	if (MST中不到 | V | -1 条边)
		Error("生成树不存在");
}
