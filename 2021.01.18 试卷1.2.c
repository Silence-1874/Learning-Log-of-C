#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct student {
		char name[20];
		char n[20];
		int s;
	}stu[4];
	struct student* p = stu;
	for (int i = 0; i < 4; i++) {
		scanf("%s", (p + i)->name);
		scanf("%s", (p + i)->n);
		scanf("%d", &(p + i)->s);
	}
	FILE* fp;
	if ((fp = fopen("StudentInfo.txt", "wb")) == NULL) {
		printf("打开失败");
		exit(0);
	}
	for (int i = 0; i < 4; i++) {
		fwrite(&stu[i], sizeof(struct student), i, fp);
	}
	fclose(fp);
	if ((fp = fopen("StudentInfo.txt", "rb")) == NULL) {
		printf("打开失败");
		exit(0);
	}
	for (int i = 0; i < 4; i++) {
		fread(&stu[i], sizeof(struct student), i, fp);
		printf("%s %s %d\n", (p + i)->name, (p + i)->n, (p + i)->s);
	}
	fclose(fp);
	return 0;
}