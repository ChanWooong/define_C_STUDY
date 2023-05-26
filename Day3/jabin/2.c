#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char ch[100];
	int n = 0;

	
	printf("1. 암호화\n2. 복호화\n");
	printf("메뉴 선택 >>");
	scanf("%d", &n);
	getchar();
	printf("문자열 입력 >>");
	gets(ch);
	int size = strlen(ch);
	printf("암호화된 문자열 출력 >>");
	if (n == 1) {
		for (int i = 0; i < size; i++) {
			printf("%c", ch[i]-29);
		}
		printf("\n");
	}
	if (n == 2) {
		for (int i = 0; i < size; i++) {
			printf("%c", ch[i] + 29);
		}
		printf("\n");
	}

	return 0;
}
