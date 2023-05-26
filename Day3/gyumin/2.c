#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct student {
        char name[100];
        char num[100];
    }ST;

    ST s[100] = {0};

    for(int i=0; i<4; i++) {
        scanf("%s %s", s[i].name, s[i].num);        
    }

    char n[100];

    printf("검색할 이름을 입력하시오:\n");
    scanf("%s", n);

    for(int i=0; i<4; i++){
        if(strcmp(s[i].name, n)==0){
            printf("%s의 전화번호는 %s입니다.\n", n, s[i].num);
        }
    }
    return 0;
}
