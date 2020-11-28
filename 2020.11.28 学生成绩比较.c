#include <stdio.h>
int main()
{
	struct Student
	{
		int num;
		char name[20];
		float score;
	}student1,student2;
	scanf_(%d%s%f, &student1.num, &student1.name, &student1.score);
	scanf_(%d%s%f, &student2.num, &student2.name, &student2.score);
	printf(The higher score isn);
	if (student1.score  student2.score)
		printf(%d %s %fn, student1.num, student1.name, student1.score);
	else if (student1.score  student2.score)
		printf(%d %s %fn, student2.num, student2.name, student2.score);
	return 0;
}