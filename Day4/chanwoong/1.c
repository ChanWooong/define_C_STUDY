#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char formula2[30] = { 0 };
void reverse(char formula[]) {
	for (int i = 0; i < strlen(formula); i++) {
		formula2[strlen(formula) - i - 1] = formula[i];
	}
}
int main() {
	char formula[30];
	gets(formula);
	//reverse(formula);
	//puts(formula2);
	int result = formula[0]-'0';
	for (int i = 1; i < strlen(formula); i+=2) {
		//printf("%d\n", result);
		//if (i % 2 == 1) {
			if (formula[i] == '+') {
				result += formula[i + 1]-'0';
			}
			else if (formula[i] == '-') {
				result -= formula[i + 1]-'0';
			}
		//}
	//	else {
	//		continue;
		//}
	}
	printf("%d", result);
}
