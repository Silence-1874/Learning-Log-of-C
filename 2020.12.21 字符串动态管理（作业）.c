#include <stdio.h>
#include <stdlib.h>

char* new (int n);	//声明new函数
void Free(char*);	//声明free函数

int main()
{
	char* s;		//定义字符指针变量s
	s = new(5);		//调用new函数，将返回的指针复制给s
	Free(s);		//释放s申请的的内存空间
}

char* new(int n)
{
	char* pc = (char*)malloc(sizeof(char) * n);
					//为pc申请字节为n的连续内存空间
return pc;			//返回指向字符串首地址的指针
}

void Free(char* pc)
{
	free(pc);		//释放pc申请的内存空间
}