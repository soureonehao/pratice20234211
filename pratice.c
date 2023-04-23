#include<stdio.h>
#define N 3
struct student {
	char id[2];
	char Name[15];
	int Chinese, Math, English;
	int Total;
};
	struct student Stu[N];
void main(){
	int i, Max = 0;
	for (i = 0; i < N; i++) {
		printf("请输入第%d个同学的信息：\n",i + 1);
		printf("请输入学号：");
		scanf_s("%s",Stu[i].id,2);
		printf("情输入姓名：");
		scanf_s("%s",Stu[i].Name,10);
		printf("请输入成绩：");
		scanf_s("%d%d%d",&Stu[i].Chinese, &Stu[i].Math, &Stu[i].English);
		printf("\n");
	}
	
	for (i = 0; i < N; i++) {
		Stu[i].Total = (Stu[i].Chinese + Stu[i].Math + Stu[i].English) / 3;
	}
	for (i = 0; i < N - 1; i++) {
		if (Stu[i].Total > Stu[Max].Total)
			Max = i;
	}
	printf("%s, %s, %d, %d , %d , %d", Stu[Max].id, Stu[Max].Name, Stu[Max].Chinese, Stu[Max].Math, Stu[Max].English, Stu[Max].Total);
	getch();
}