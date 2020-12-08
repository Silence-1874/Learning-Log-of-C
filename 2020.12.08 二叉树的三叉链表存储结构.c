#include <stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct BiTNode {
		char data;					//数据域
		struct BiTNode* Lchild;		//左孩子指针
		struct BiTNode* Rchild;		//右孩子指针
		struct BiTNode* Parent;		//双亲指针
	}BiTree;
	BiTree* T = (BiTree*)malloc(sizeof(BiTree));	//创建根节点
	T->data = 'A';
	T->Lchild = (BiTree*)malloc(sizeof(BiTree));
	T->Lchild->data = 'B';
	T->Lchild->Parent = p;
	T->Rchild = (BiTree*)malloc(sizeof(BiTree));
	T->Rchild->data = 'C';
	T->Rchild->Parent = p;
	//以此类推
	return 0;
}*/