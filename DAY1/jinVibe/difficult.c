#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sortWithoutDuplication(int arr[], int* size);

int main()
{
   int i, size; // 
   int* arrsize = &size;
   int arry[10] = { NULL };

   for (i = 0; i < 10; i++)
      scanf("%d", &arry[i]);
   sortWithoutDuplication(arry, arrsize);

   for (i = 0; i < size; i++)
      printf("%d ", arry[i]);
}

void sortWithoutDuplication(int arr[], int* size)
{
   int i, j, k, temp;
   *size = 10;

   for (i = 0; i < 10; i++) 
   {
      for (j = 0; j < 9 - i; j++) 
      {
         if (arr[j] > arr[j + 1]) 
         {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }

   for (i = 0; i < 10; i++) 
   {
      for (j = 1; j < *size; j++) 
      {
         if (arr[j] == arr[j - 1]) 
         {
            for (k = j; k < *size; k++)
               arr[k - 1] = arr[k];
            (*size)--;
         }
      }
   }
}
