#include <stdio.h>
#include <string.h>

void sortWithoutDuplication(int arr[], int *size)
{   
    int temp, i, j, res, cnt=0;
    for(i=0; i<10; i++)
    scanf("%d", &arr[i]);

    for (i=0; i<10; i++){
        for (j=0; j<10-1-i; j++){
            if(arr[j] > arr[j+1]){
                res = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = res;
            }
        }
    }
    for(i=0; i<9; i++){
        for(j=1; j<=9; j++){
            if(i==j)
            continue;

            if(arr[i] == arr[j]){
                for(int p=j; p<10; p++){
                    temp = arr[p+1];
                    arr[p] = temp;
                    if(arr[i] == arr[p]){
                        temp = arr[p+1];
                        arr[p] = temp;
                    }
                }
            }
        }
        for(j=1; j<=9; j++){
            if(i==j)
            continue;

            if(arr[i] == arr[j]){
                for(int p=j; p<10; p++){
                    temp = arr[p+1];
                    arr[p] = temp;
                    if(arr[i] == arr[p]){
                        temp = arr[p+1];
                        arr[p] = temp;
                    }
                }
            }
        }
    }
    for (i=0; i<10; i++){
        if(arr[i+1] != 0)
        cnt+=1;
    }
    *size = cnt;
    for(i=0; i<=*size; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main()
{
    int n;
    int arr[100] = {0};

    sortWithoutDuplication(arr, &n);

    return 0;
}
