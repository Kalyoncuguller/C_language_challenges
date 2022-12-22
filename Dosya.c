#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[600];

    FILE *fgk;

    fgk = fopen("dosya.txt", "w");

    if (fgk == NULL) {
        printf("The file could not be opened!");
        exit(1);
    }
    printf("Enter a sentence:");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fgk, "%s", sentence);
    fclose(fgk);
    return 0;
}

