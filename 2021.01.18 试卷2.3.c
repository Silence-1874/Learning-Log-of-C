#include <stdio.h> 
static struct man
{
	char name[20];
	int age;
}person[] = { {"Li-ming",18},{"wang-hua",19},{"zhang-ping",20} };
main()
{
	struct man* p, * q;
	q = NULL;
	int old = 0;
	for (p = person; p < person + 3; p++)
	{
		if (old < p->age)
		{
			q = p;
			old = p->age;
		}
	}
	printf("%s %d", q->name, q->age);
}
