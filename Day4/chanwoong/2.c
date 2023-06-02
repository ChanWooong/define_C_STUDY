#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int sum = 0;
int checkMagic(int a) {
   
   if ((a/10) % 10 == 0 && a < 10) {
      if (sum == 0) {
         return 1;
      }
      else {
         return 0;
      }
   }
   sum += (a % 10) - ((a / 10) % 10);
   //printf("%d %d\n",a, sum);
   checkMagic(a / 10);

}
int checkMagic2(int a) {

   if (a < 10) {
      return 1;
   }
   //printf("%d %d\n",a, abs((a % 10) - ((a / 10) % 10)));
   if (abs((a % 10) - ((a / 10) % 10)) > 1) {
      return 0;
   }
   checkMagic2(a / 10);
   
}

int main() {
   int a=0;
   while (1) {
      scanf("%d", &a);
      if (a == 0) {
         break;
      }
      if (a < 10) {
         printf("yes\n");
         continue;
      }
      int judge = checkMagic2(a);
      if (judge == 1) {
         printf("yes\n");
      }
      else {
         printf("no\n");
      }
   }
}
//12233
//9
//323
//4555
//12355
//788990
//0
