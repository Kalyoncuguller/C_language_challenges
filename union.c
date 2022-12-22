//Lütfen geliştirip yazınız.
#include"stdio.h"
#include"stdlib.h"
#include"string.h"
union student{
	int numara;
	float sinavnotu;
	char isim[20];	
};
int main(){
	int i;
	int sinif=50;
	union student veri;
	basla:
    for(i=0;i<sinif;i++){
	printf("%d. student name:",i+1);
	scanf("%s",veri.isim);
	printf("%d. student number: ",i+1);
	scanf("%d",&veri.numara);
	printf("%d. student exam grade: ",i+1);
	scanf("%f",&veri.sinavnotu);
	if(veri.sinavnotu<50){
		printf("%d. student exam grade %.2f .You failed the exam.\n",i+1,veri.sinavnotu);
	}
    else if(veri.sinavnotu>100){
		printf("Gecersiz not girdiniz.\n");
	}
	else{
		printf("%d. student exam grade %.2f .You passed the exam.\n",i+1,veri.sinavnotu);
	}
   }
	goto basla;
	return 0;
}
