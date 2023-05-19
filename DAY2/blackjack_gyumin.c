#include <stdio.h>

int main()
{
    int n, m, sum=0, max=0, i;
    int arr[100];
    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j)
                continue;
            for(int p=0; p<n; p++){
                if(i==p || j==p)
                    continue;
                
                if((arr[i]+arr[j]+arr[p])<=m ){
                    if((arr[i]+arr[j]+arr[p]) > max)
                         max = (arr[i]+arr[j]+arr[p]);
                }
            }
        }
    }
    printf("%d", max);
}
