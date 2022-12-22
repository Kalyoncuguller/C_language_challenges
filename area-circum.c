#include<stdio.h>
#include<conio.h>
int main(){
    
const float pi=3.14;
float area,circum;
int r;

printf("Enter radius value:");
scanf("%d",&r);

area = pi*r*r;
circum = 2*pi*r;

printf("Area: %.2f\n",area);
printf("Circum: %.2f",circum);

return 0;
}
