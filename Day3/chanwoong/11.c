#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
char* toCipher(char str[]);
void toNormal(char str[]);

int main(){
	int choose;
	char str[MAX] = {0};
	char *change = NULL;
	//char change[MAX] = {0};

	printf("1.암호화\n2.복호화\n\n");
	printf("메뉴 선택>> ");
	scanf("%d", &choose);
	printf("\n\n문자열 입력>> ");
	getchar();
	gets(str);
	if(choose == 1){
		printf("암호화된 문자열 출력>> ");
		change = toCipher(str);
		puts(change);

	}
	else{
		printf("복호화된 문자열 출력>> ");
		toNormal(str);
	} 
}
char* toCipher(char str[]){
	char caesar[MAX] = {0};
	for(int i = 0 ; i<strlen(str); i++){
		if(str[i] == ' '){
			caesar[i] = ' ';
		}
		else if(str[i] >= 'x' && str[i] <= 'z'){
			caesar[i] = str[i] - 24;
		}
		else{
			caesar[i] = str[i] + 3;
		}
	}
	
	return caesar;
}

void toNormal(char str[]){
	
	for(int i = 0 ; i<strlen(str); i++){
		if(str[i] == ' '){
			printf(" ");
		}
		else if(str[i] >= 'a' && str[i] <= 'c'){
		}
		else {
			printf("%c",str[i]-3);
		}
	}
}
