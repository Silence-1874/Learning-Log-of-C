#include<stdio.h>
#include<string.h>

typedef struct {								//定义结构体
	char name[10];								//name数组储存职工姓名
	int num;									//num储存职工号
}Staff;

void output(Staff*);							//声明输出函数
void input(Staff*);								//声明输入函数
void sort(Staff*);								//声明排序函数
void search(Staff*, int);						//声明查找函数

int main()
{
	Staff a[10];								//定义结构体数组，储存各个职工的数据
	printf("请输入10个职工的职工号和姓名：\n");	//输出使用说明
	input(a);									//调用input函数
	printf("按职工号大到小排序后：\n");			//输出使用说明
	sort(a);									//调用sort函数
	printf("请输入要查找的职工号：\n");			//输出使用说明
	search(a, a->num);							//调用search函数
	return 0;
}

void output(Staff* a)
{
	printf("\n职工名\t\t职工号\t\t\n");
	for (int i = 0; i < 10; i++) {
		printf("%s\t\t%d\t\t\n", a[i].name, a[i].num);
	}
	printf("\n");
}

void input(Staff* a)
{
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i].num);				//输入职工号
		gets(a[i].name);						//输入姓名
	}
	output(a);									//输出当前职工
}
void sort(Staff* a)
{
	int i = 0, j = 0, k = 0;
	int t = 0;
	char str[10];
	for (j = 0; j < 10; j++)					//选择排序
	{
		for (i = j; i < 10; i++)
		{
			int k = j;
			if (a[i].num < a[j].num)
				k = i;
			if (k != j)
			{
				strcpy_s(str, 10, a[j].name);
				strcpy_s(a[j].name, 10, a[k].name);
				strcpy_s(a[k].name, 10, str);
				t = a[j].num;
				a[j].num = a[k].num;
				a[k].num = t;
			}
		}
	}
	output(a);									//输出当前职工
}

void search(Staff* a, int n)
{
	scanf_s("%d", &n);
	int i = 0, j = 9, m = 0;
	while (i <= j) {							//当待查找的范围大于等于0时，继续查找
		m = (i + j) / 2;						//计算中间元素的下标
		if (n < a[m].num) j = m - 1;			//让待查找元素与中间元素比较，若待查找元素小于中间元素，待查找范围的下界移动到中间元素的右边一位
		else if (n > a[m].num) i = m + 1;		//让待查找元素与中间元素比较，若待查找元素大于中间元素，待查找范围的上界移动到中间元素的左边一位
		else {
			printf("要查找职工为 %s", a[m].name);	//若待查找元素等于中间元素，则输出中间元素的位置
			break;								//并跳出该循环
		}
	}
	if (i > j) printf("无此人");					//若最终待查找范围的下界越过了上界，说明查找失败
}