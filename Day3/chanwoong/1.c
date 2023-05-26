#include <stdio.h>
#include <string.h>
typedef struct data{
	char name[20];
	char p_num[20];
};
int main(){
	data inputData[5];
	char find[20];
	for(int i = 0 ; i<4; i++){
		scanf("%s %s",inputData[i].name, inputData[i].p_num);
	}
	printf("\n\n검색할 이름을 입력하시오:\n");
	scanf("%s", find);
	printf("\n\n");
	for(int i = 0; i<4; i++){
		if(strcmp(find, inputData[i].name)==0){
			printf("%s의 전화번호는 %s 입니다.",find, inputData[i].p_num);
			break;			
		}
	}
}
