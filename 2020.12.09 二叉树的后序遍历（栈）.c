#include <stdio.h>
#include <stdlib.h>
typedef struct BiTNode {
	char data;
	struct BiTNode* Lchild;
	struct BiTNode* Rchild;
}BiTNode, * BiTree;

typedef struct SNode {
	BiTree p;
	int tag;
}SNode;

int top = -1;
void pop();
void postpush(SNode*, SNode);
void CreateBiTree(BiTree*);
void PostOrderTraverse(BiTree);

int main()
{
	BiTree Tree;
	CreateBiTree(&Tree);
	PostOrderTraverse(Tree);
	return 0;
}


void PostOrderTraverse(BiTree T)
{
	SNode stack[20];
	BiTNode* p;
	int tag;
	SNode sdata;
	p = T;
	while (p || top != -1) {
		while (p) {
			sdata.p = p;
			sdata.tag = 0;
			postpush(stack, sdata);
			p = p->Lchild;
		}
		sdata = stack[top];
		pop();
		p = sdata.p;
		tag = sdata.tag;
		if (tag == 0) {
			sdata.p = p;
			sdata.tag = 1;
			postpush(stack, sdata);
			p = p->Rchild;
		}
		else {
			printf("%c", p->data);
			p = NULL;
		}
	}
}

void postpush(SNode* a, SNode sdata)
{
	a[++top] = sdata;
}

void pop()
{
	if (top == -1) {
		printf("栈空！");
		return;
	}
	top--;
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