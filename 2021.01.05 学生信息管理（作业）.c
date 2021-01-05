#define N 6
typedef struct s {	//定义结构体s,储存学生数据
	int score[3];	//储存3门课的成绩
	int n;			//储存学生学号
	char name[10];	//储存学生姓名
	double avg;		//储存学生平均分
}*stu;				//将指向该结构体的指针类型命名为stu

int main()
{
	stu p = (stu)malloc(sizeof(struct s) * N);	//初始化指针p
	for (int i = 0; i < N - 1; i++) {			//初始化学生数据
		printf("请输入第%d名学生的姓名、学号，以及三门课的成绩:\n", i + 1);
		scanf_s("%s %d %d %d %d", (p + i)->name, 10,
			&(p + i)->n, &(p + i)->score[0],
			&(p + i)->score[1], &(p + i)->score[2]);
	}
	for (int i = 0; i < N - 1; i++) {			//计算平均分
		double sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += (p + i)->score[j];
		}
		(p + i)->avg = sum / 3;
	}

	for (int i = 0; i < N; i++) {				//选择排序
		int k = i;
		for (int j = i; j < N; j++) {
			if ((p + k)->avg < (p + j)->avg) {
				k = j;
			}
		}
		if (k != i) {
			struct s t = *(p + k);
			*(p + k) = *(p + i);
			*(p + i) = t;
		}
	}

	printf("请输入新学生的姓名、学号，以及三门课的成绩:\n");
	scanf_s("%s %d %d %d %d", (p + N - 1)->name, 10,
		&(p + N - 1)->n, &(p + N - 1)->score[0],
		&(p + N - 1)->score[1], &(p + N - 1)->score[2]);
	double sum = 0;
	for (int j = 0; j < 3; j++) {
		sum += (p + N - 1)->score[j];
	}
	(p + N - 1)->avg = sum / 3;
	struct s temp = *(p + N - 1);

	int t = 0;
	for (int i = 0; i < N; i++) {				//插入新学生的数据
		if (temp.avg > (p + i)->avg) {
			t = i;
			break;
		}
	}
	for (int i = N - 1; i > t; i--) {
		*(p + i) = *(p + i - 1);
	}
	*(p + t) = temp;

	FILE* fp;									//定义文件指针fp
	fopen_s(&fp, "stu_sort.text", "w");			//以只写方式打开stu_sort.text
	fprintf(fp, "姓名\t\t学号\t\t成绩1\t\t成绩2\t\t成绩3\t\t平均分\n");
	for (int i = 0; i < N; i++) {				//将数据输入到文件中
		fprintf(fp, "%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%lf\n",
			(p + i)->name, (p + i)->n, (p + i)->score[0],
			(p + i)->score[1], (p + i)->score[2], (p + i)->avg);
	}
	fclose(fp);									//关闭文件
	return 0;
}