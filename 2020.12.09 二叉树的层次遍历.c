#include <stdio.h>
#include <stdlib.h>
typedef struct BiTNode {
	char data;
	struct BiTNode* Lchild;
	struct BiTNode* Rchild;
}BiTNode, * BiTree;

void CreateBiTree(BiTree*);
void LevelOrderTraverse(Bitree);

int Front, Rear;
Front = 0;
Rear = 0;

int main()
{
	BiTree Tree;
	CreateBiTree(&Tree);
	LevelOrderTraverse(Tree);
	return 0;
}

void LevelOrderTraverse(BiTree T)
{
	BiTNode* p;
	BiTree q[20];
	q[Rear++] = T;
	while (Front < Rear) {
		p = q[Front++];
		printf("%c", p->data);
		if (p->Lchild != NULL) {
			q[Rear++] = p->Lchild;
		}
		if (p->Rchild != NULL) {
			q[Rear++] = p->Rchild;
		}
	}
}

void CreateBiTree(BiTree* T)
{
	*T = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->data = 'A';
	(*T)->Lchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Lchild->data = 'B';
	(*T)->Rchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Rchild->data = 'C';
	(*T)->Lchild->Lchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Lchild->Lchild->data = 'D';
	(*T)->Lchild->Rchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Lchild->Rchild->data = 'E';
	(*T)->Rchild->Lchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Rchild->Lchild->data = 'F';
	(*T)->Rchild->Rchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Rchild->Rchild->data = 'G';
	(*T)->Lchild->Lchild->Lchild = NULL;
	(*T)->Lchild->Lchild->Rchild = NULL;
	(*T)->Lchild->Rchild->Lchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Lchild->Rchild->Lchild->data = 'H';
	(*T)->Lchild->Rchild->Lchild->Lchild = NULL;
	(*T)->Lchild->Rchild->Lchild->Rchild = NULL;
	(*T)->Lchild->Rchild->Rchild = NULL;
	(*T)->Rchild->Lchild->Lchild = NULL;
	(*T)->Rchild->Lchild->Rchild = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->Rchild->Lchild->Rchild->data = 'I';
	(*T)->Rchild->Lchild->Rchild->Lchild = NULL;
	(*T)->Rchild->Lchild->Rchild->Rchild = NULL;
	(*T)->Rchild->Rchild->Lchild = NULL;
	(*T)->Rchild->Rchild->Rchild = NULL;
}