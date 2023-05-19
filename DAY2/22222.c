#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	char ch[20];
    char delimiter = '#';
    char* ptoken;

	scanf("%s", ch); // 1
	
    ptoken = strtok(ch, delimiter);

	for (i = strlen(*ptoken)-1; i >= 0; i--) // 2
	{
        printf("%c", *(ptoken + i));
	}
}

