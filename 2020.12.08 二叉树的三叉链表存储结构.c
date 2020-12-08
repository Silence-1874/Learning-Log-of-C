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
	BiTree* p = (BiTree*)malloc(sizeof(BiTree));	//创建根节点
	p->data = 'A';
	p->Lchild = (BiTree*)malloc(sizeof(BiTree));
	p->Lchild->data = 'B';
	p->Lchild->Parent = p;
	p->Rchild = (BiTree*)malloc(sizeof(BiTree));
	p->Rchild->data = 'C';
	p->Rchild->Parent = p;
	//以此类推
}
