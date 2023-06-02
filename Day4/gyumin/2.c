#include <stdio.h>

int magic=1;

int checkMagic(int a);

int main() {
    int num;
    while(1) {
        scanf("%d", &num);
        if(num==0)
        break;

        if(checkMagic(num)==0)
        printf("yes\n");

        else
        printf("no\n");
    }
    
    return 0;
}

int checkMagic(int a) {
    extern int magic;

    if(a > 100) {
        magic = ((a % 10) - ((a/10)%10)) + (((a/10)%10) - ((a/100)%10));

        checkMagic(a/10);
    }
    
    return magic;
}
