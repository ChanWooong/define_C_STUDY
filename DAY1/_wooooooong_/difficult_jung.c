#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXSIZE 5

int stack[MAXSIZE];
int top = -1;

int isfull();
int isempty();
void push(int n);
int pop();

int main() {
	int num;
	while (1) {
		printf("Enter(1:push 2:pop q:quit):");
		scanf("%d", &num);
		if ((char)num == 'q') break;
		else if (num == 1) {
			int val;
			printf("value pushed ");
			scanf("%d", &val);
			if (isfull()) printf("Stack is Full!\n");
			else push(val);
		}
		else if (num == 2) {
			int check = pop();
			if (check == -1) printf("Stack is Empty!\n");
			else printf("value popped %d\n", check);
		}
	}
}

int isfull() {
	if (top == MAXSIZE - 1) return 1;
	else return 0;
}
void push(int n) {
	stack[++top] = n;
}
int isempty() {
	if (top == -1) return 1;
	else return 0;
}
int pop() {
	if (isempty()) return -1;
	else return stack[top--];
}
