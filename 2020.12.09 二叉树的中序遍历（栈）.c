#include <stdio.h>
#include <stdlib.h>
typedef struct BiTNode {
	char data;
	struct BiTNode* Lchild;
	struct BiTNode* Rchild;
}BiTNode, * BiTree;
int top = -1;
void pop();
void push(BiTNode**, BiTNode*);
void CreateBiTree(BiTree*);
void InOrderTraverse(BiTree);
int main()
{
	BiTree Tree;
	CreateBiTree(&Tree);
	InOrderTraverse(Tree);
	return 0;
}

void InOrderTraverse(BiTree T)
{
	BiTNode* stack[20];	
	BiTNode* p;
	push(stack, T);
	while (top != -1) {
		while ((p = stack[top]) && p) {
			push(stack, p->Lchild);
		}
		pop();
		if(top != -1) {
			p = stack[top];
			pop();
			printf("%c", p->data);
			push(stack, p->Rchild);
		}
	}
}

void push(BiTNode** a, BiTNode* data)
{
	a[++top] = data;
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