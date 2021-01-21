#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct
{
	char name[20];
	int number;
	char sex;
	union
	{
		char eye;
		struct
		{
			int height;
			int weight;
		}f;
	}body;
}per[2];

int main()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		scanf("%s %d %c", &per[i].name, &per[i].number, &per[i].sex);
		if (per[i].sex == 'M')
		{
			scanf("%c", &per[i].body.eye);
		}
		else if (per[i].sex == 'f')
		{
			scanf("%d %d", &per[i].body.f.height, &per[i].body.f.weight);
		}
		else
		{
			printf("input error!\n");
		}
	}
	return 0;
}
