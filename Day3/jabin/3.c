#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {
	int std_id;
	char name[30];
	double score[3];
	double total;
}student;

student a[100];

int main() {
	FILE* f, * f1;
	char frame[100];
	char frame1[100];
	scanf("%s", &frame);
	scanf("%s", &frame1);
	f = fopen(frame, "r");
	f1 = fopen(frame1, "wb");
	student a[100] = { '\0' };
	int i = 0;
	while (!feof(f)) {
		fscanf(f, "%d %s %lf %lf %lf\n", &a[i].std_id, a[i].name, &a[i].score[0], &a[i].score[1], &a[i].score[2]);
		i++;
	}

	student temp;
	char line[100];
	for (int j = 0; j < i; j++) {
		a[j].total = a[j].score[0] + a[j].score[1] + a[j].score[2];
	}
	for (int j = 0; j < i; j++) {
		for (int k = 0; k < i - 1; k++) {
			if (a[j].total > a[k].total) {
				temp = a[j];
				a[j] = a[k];
				a[k] = temp;
			}
		}

	}
	for (int j = 0; j < i; j++) {
		printf("%d %s %.1lf %.1lf %.1lf %.1lf\n", a[j].std_id, a[j].name, a[j].score[0], a[j].score[1], a[j].score[2], a[j].total);
	}
	fwrite(a, sizeof(student), i, f1);

	fclose(f);
	fclose(f1);
}
