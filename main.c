#include <stdio.h>

int main() {
    FILE *f1 = fopen("D:/3.txt", "r");
    int length;


    fscanf(f1, "%d" , &(length));

    char string[++length];

    fscanf(f1, "%s", string);

    fclose(f1);

    int newLength = 1;
    for (int i = 0; i < length; ++i) {
        if (string[i] == ':'){
            newLength += 2;
        }
        newLength++;
    }

    char newString[newLength];

    int k = 0;
    for (int i = 0; i < length; ++i) {
        if(string[i] == '!'){
            newString[k] = '.';
            k++;
        } else if(string[i] == ':'){
            for (int j = 0; j < 3; ++j) {
                newString[k] = '.';
                k++;
            }
        } else {
            newString[k] = string[i];
            k++;
        }
    }






    FILE *f2 = fopen("D:/4.txt", "w");
    fprintf(f2, "%s", newString);

    fclose(f2);
    printf("All done");
    return 0;
}
