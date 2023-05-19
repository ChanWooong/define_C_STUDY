#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	char ch[20];
    char delimiter = '#';
    char* ptoken;

	scanf("%s", ch); // 1
	
    ptoken = strtok(ch, delimiter);		 // delimiter의 기본형이 char*임. 포인터로 접근하는 만큼 &를 붙여 주소값으로 지정해주어야 함. 

	for (i = strlen(*ptoken)-1; i >= 0; i--) // ptoken에 *을 한번더 달면 기존에도 char* ptoken이었는데, 
						 //char** ptoken 형식이 되어서 엄밀히는 string 배열의 주소가 됨.
	{
        printf("%c", *(ptoken + i));		 // ptoken + i를 통해 원하는 인덱스의 배열값을 잡아주고 *을 통해서 배열 내부의 값을 접근함.
	}
}

strtok(char* str, char* del){
/...
}
