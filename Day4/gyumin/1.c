#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getnumber(char string[], int number[]);
void calculation(char string[], int number[]);

int main() {
    char getstring[100] = {0};
    int number[100] = {0};

    gets(getstring);

    getnumber(getstring, number);

    calculation(getstring, number);

    return 0;
}

void getnumber(char string[], int number[]) {
    int i, j=0;
   
    for(i=0; i<strlen(string); i++){
        if(string[i] >= '0' && string[i] <= '9'){
            number[j] = atoi(&string[i]);
            j++;
        }
    }
}

void calculation(char string[], int number[]) {
    int i=0, j=1, sum=0;
    sum += number[0];

    for(i=0; i<strlen(string); i++){
        if(string[i] == '+'){
            sum += number[j];
            j++;
        }
        else if(string[i] == '-') {
            sum -= number[j];
            j++;
        }
    }
    printf("%d\n", sum);
}
