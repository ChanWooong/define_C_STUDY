#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct info {
	int no;
	char name[20];
	double gr1;
	double gr2;
	double gr3;
	double tot;
}info;

int main()
{
	info stu[10], temp;
	int i = 0;


	FILE* f1, * f2;

	f1 = fopen("input.txt", "r");
	f2 = fopen("output.txt", "w");

	while (!feof(f1))
	{
		fscanf(f1, "%d %s %lf %lf %lf", &stu[i].no, stu[i].name, &stu[i].gr1, &stu[i].gr2, &stu[i].gr3);
		stu[i].tot = stu[i].gr1 + stu[i].gr2 + stu[i].gr3;

		i++;
	}
	for (i = 0; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (stu[i].tot > stu[j].tot)
			{
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		fprintf(f2, "%d %s %.1lf %.1lf %.1lf %.1lf\n", stu[i].no, stu[i].name, stu[i].gr1, stu[i].gr2, stu[i].gr1, stu[i].tot);
		printf("%d %s %.1lf %.1lf %.1lf %.1lf\n", stu[i].no, stu[i].name, stu[i].gr1, stu[i].gr2, stu[i].gr1, stu[i].tot);
	}
	fclose(f1);
	fclose(f2);
}
