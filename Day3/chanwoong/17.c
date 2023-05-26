#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct info{
	int num;
	char name[30];
	double score[3];
	double total;
};
info myList[10];
void calculate(int size);
void sort(int size);

int main(){
	FILE* fp, * fp2;
	int size = 0;
	
	fp = fopen("input.txt", "r");
	while(!feof(fp)){
		fscanf(fp,"%d %s %lf %lf %lf",&myList[size].num,myList[size].name, &myList[size].score[1],&myList[size].score[2],&myList[size].score[3]);
		size++;
	}
	calculate(size);
	sort(size);
	for(int i = 0 ; i<size; i++){
		printf("%d %s %lf %lf %lf %lf\n",myList[i].num,myList[i].name, myList[i].score[1],myList[i].score[2],myList[i].score[3], myList[i].total);
	}
	fp2 = fopen("output.txt", "w");
	for(int i = 0 ; i<size; i++){
		fprintf(fp2,"%d %s %lf %lf %lf %lf\n",myList[i].num,myList[i].name, myList[i].score[1],myList[i].score[2],myList[i].score[3], myList[i].total);
	}
	fclose(fp);
	fclose(fp2);
}
void sort(int size){
	for(int i = 0 ; i < size; i++){
		for(int j = 0 ; j < size; j++){
			info temp;
			if(myList[i].total > myList[j].total){
				temp = myList[i];
				myList[i] = myList[j];
				myList[j] = temp;
			}
		}
	}
}
void calculate(int size){
	for(int i = 0 ; i < size; i++){
		myList[i].total = myList[i].score[1]+myList[i].score[2]+myList[i].score[3];
	}
}
