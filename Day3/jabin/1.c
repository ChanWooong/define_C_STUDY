#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct phone {
	char name[30];
	char number[50];
};

struct phone a[4];

int main() {
	for (int i = 0; i < 4; i++) {

	scanf("%s %s", a[i].name, a[i].number);
	}
	char name[10];
	printf("검색할 이름을 입력하시오:");
	scanf("%s", name);
	for (int i = 0; i < 4; i++) {
		if (strcmp(name, a[i].name) == 0) {
			printf("%s의 전화번호는 %s입니다.", a[i].name, a[i].number);
		}
	}

}
