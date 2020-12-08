#include <stdio.h>
int main()				//适用于完全二叉树
{
	char BiTree[15];
	for (int i = 0; i < 15; i++) {
		BiTree[i] = 'A' + i;
	}
	int n = 5 + 1;
	printf("%c\n", BiTree[n/2 - 1]);	//寻找F的双亲（C）
	printf("%c\n", BiTree[n*2 - 1]);	//寻找F的左孩子（L）
	printf("%c\n", BiTree[n*2 + 1 - 1]);//寻找F的右孩子（M）
	return 0;
}