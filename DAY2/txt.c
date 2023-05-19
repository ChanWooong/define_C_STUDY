#include <stdio.h>
#include <string.h>

int main()
{
	char ch[20], a;
    int cnt=0;
    gets(ch);

    for(int i=0; i<strlen(ch); i++){
        
        if(*(ch+i)=='#'){
            for(int j=cnt-1; j>=0; j--){
                printf("%c", *(ch+j));
            }
            break;
        }
        cnt++;
    }
    return 0;
}
