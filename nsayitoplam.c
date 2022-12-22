//Lütfen geliştirip yazınız!
#include"stdio.h"
int main(){
	int i,n,sayi,toplam=0;
	printf("Kac sayi gireceksiniz?\n");
	scanf("%d",&n);
	printf("%d sayi giriniz: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&sayi);
		toplam+=sayi;
	}
	printf("\nGirilen %d sayinin toplami= %d",n,toplam);
	return 0;
	
}
