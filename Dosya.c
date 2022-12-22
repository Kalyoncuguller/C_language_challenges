#include <stdio.h>
int main(){
    FILE *dosya =fopen("dosya.txt","w+");
    if(dosya==NULL) {
        printf("Dosya acilamadi");
    }
    else {
        printf("Dosya acildi");
        
    }
    fclose(dosya);
    return 0;
}

