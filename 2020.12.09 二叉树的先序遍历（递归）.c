#include <stdio.h>
#include <stdlib.h>
typedef struct BiTNode {
	char data;				//数据域
	struct BiTNode* Lchild;	//左孩子指针
	struct BiTNode* Rchild;	//右孩子指针
}BiTNode, * BiTree;
void CreateBiTree(BiTree*);
void PreOrderTraverse(BiTree);
int main()
{
	BiTree Tree;
	CreateBiTree(&Tree);
	PreOrderTraverse(Tree);
	return 0;
}
void PreOrderTraverse(BiTree T) //先序遍历：根→左→右
{
	if (T) {
		printf("%c", T->data);
		PreOrderTraverse(T->Lchild);//访问该结点的左孩子
		PreOrderTraverse(T->Rchild);//访问该结点的右孩子
	}
	else putchar('#');
	return;
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

	(*T)->Lchild->Rchild->Lchild = (BiTNode*)malloc(sizeof(BiTNode));	//这句话生成了第四层的结点，必须保证该结点的左右孩子指针初始化
	(*T)->Lchild->Rchild->Lchild->data = 'H';							//所有储存了数据的结点的左右孩子指针必须初始化
	(*T)->Lchild->Rchild->Lchild->Lchild = NULL;						//这两句必须要，否则“H”所在的结点的左右孩子都未初始化
	(*T)->Lchild->Rchild->Lchild->Rchild = NULL;					  	//迭代的时候会读取到未被初始化的内存，于是报错
																		//这里的错误花了将近一整天的时间才找到……真不容易阿
	(*T)->Lchild->Rchild->Rchild = NULL;
	(*T)->Rchild->Lchild->Lchild = NULL;
	(*T)->Rchild->Lchild->Rchild = (BiTNode*)malloc(sizeof(BiTNode));	//这里同上
	(*T)->Rchild->Lchild->Rchild->data = 'I';
	(*T)->Rchild->Lchild->Rchild->Lchild = NULL;
	(*T)->Rchild->Lchild->Rchild->Rchild = NULL;
	(*T)->Rchild->Rchild->Lchild = NULL;
	(*T)->Rchild->Rchild->Rchild = NULL;
}