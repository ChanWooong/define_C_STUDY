#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   int n, m,i,j,k,l=0;
   int arr[100];
   int sum[10000];
   int max = 0;

   scanf("%d %d", &n, &m);

   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   
      for (i = 0; i < n-2; i++)
      {
         for (j = i+1; j < n-1; j++)
         {
            for (k = j+1; k < n; k++)
            {   
               sum[l++] = arr[i] + arr[j] + arr[k];
            }
         }
      }
   for (l = 0; l < n * (n - 1) * (n - 2) / 6; l++)
   {
      if (sum[l] <= m)
      {
         if (max < sum[l])
            max = sum[l];
      }
   }
   printf("%d", max);
}
