
#include <stdio.h>
int main(){
	int a,b;
	int *pa,*pb;
	
	pa=&a; pb=&b;
	
	printf("İlk tam sayıyı girin: ");
	scanf("%d",pa);
	printf("İkinci tam sayıyı girin: ");
	scanf("%d",pb);
	
	//compare 
	if(*pa==*pb)
		printf("Equal \n");
	else
		printf("Not equal\n");
	
	return 0;
}
