#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXSIZE 5

int top = -1;
int stack[MAXSIZE];

void push(int n);

int pop();
int isfull();
int isempty();

int main() {
   int n;
   char a;
   while (1) {
      printf("Enter(1:push 2:pop q:quit):");
      scanf("%c", &a);
      getchar();
      
      

      if (a == '1') {
         printf("value pushed:");
         scanf("%d", &n);
         getchar();
         push(n);
      }
      else if (a == '2') {
           int t = pop();
         if(t!=-1)
         printf("value popped %d\n",t);
      }
      else if (a == 'q') {
         return 0;
      }
   }
}


void push(int n) {
   if (!isfull())
   {
      stack[++top] = n;
      //printf("value pushed:%d\n", n);
   }
}

int pop() {
   if (!isempty())
      return stack[top--];
   else return -1;

}

int isfull() {

   if (top == 4) {
      printf("Stack is Full!\n");
      return 1;
   }
   else return 0;
}

int isempty() {
   if (top == -1) {
      printf("Stack is Empty!\n");
      return 1;
   }
   else return 0;
}
