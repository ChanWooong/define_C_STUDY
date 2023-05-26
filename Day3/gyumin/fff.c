#include <stdio.h>
#include <string.h>

typedef struct talent {
    int id;
    char name[30];
    double score[3];
    double total;
}TA;
typedef struct tmp{
    int s;
    char ss[30];
    double dfsdf[3];
    double sdf;
}TP;

int main() {
    char input_filename[50];
    char output_filename[50];


    FILE* input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        return 1;
    }

    FILE* output_file = fopen("output.txt", "wb");
    if (output_file == NULL) {
        fclose(input_file);
        return 1;
    }

    TA t[10] = {0}, temp;
    int i=0;
    while (fscanf(input_file, "%d\t%s\t%lf\t%lf\t%lf", &t[i].id, t[i].name, &t[i].score[0], &t[i].score[1], &t[i].score[2]) == 5) {
        t[i].total = t[i].score[0] + t[i].score[1] + t[i].score[2];
        i++;
    }
    for (int j=0; j<i; j++){
        for (int p=0; p<i-1-j; p++){
            if(t[p].total > t[p+1].total){
                temp = t[p];
                t[p] = t[p+1];
                t[p+1] = temp;
            }
        }
    }
    for(int j=0; j<i; j++){
    printf("%d\t%s\t%.1lf\t%.1lf\t%.1lf\t%.1lf\n", t[j].id, t[j].name, t[j].score[0], t[j].score[1], t[j].score[2], t[j].total);
    fwrite(&t[i], sizeof(TA), 1, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
