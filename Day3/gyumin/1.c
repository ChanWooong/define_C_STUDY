#include <stdio.h>
#include <string.h>
int main()
{
    char encrypt[26]="abcdefghijklmnopqrstuvwxyz";
    char decrypt[26]="defghijklmnopqrstuvwxyzabc";
    char str[30];
    
    printf("1. 암호화\n2. 복호화\n\n메뉴 선택 >> ");
    int n;
    scanf("%d", &n);
    getchar();
    
    printf("\n문자열 입력>> ");
    gets(str);
    
    printf("복호화된 문자열 출력 >> ");
    if(n==1){
        for(int i=0; i<26; i++){
            if(str[i] == ' '){
                printf(" ");
                continue;
            }
            for(int j=0; j<26; j++){
                if(i==j)
                    continue;
                if(*(str+i)==*(encrypt+j))
                    printf("%c", *(decrypt+j));
            }
        }
    }
    else if(n==2){
        for(int i=0; i<26; i++){
            if(str[i] == ' ')
                    printf(" ");
            for(int j=0; j<26; j++){
                if(i==j)
                    continue;
                if(*(str+i)==*(decrypt+j))
                    printf("%c", *(encrypt+j));
            }
        }
    }
    return 0;
}
