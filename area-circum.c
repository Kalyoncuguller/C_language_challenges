#include <stdio.h>
#include <conio.h>
#define pi 3.14

int main(){
  
    float r,circum,area;
    
    printf("Enter the radius of the circle:");
    scanf("%f", &r);
    
    circum=2*pi*r;
    area=pi*r*r;
    
    printf ("Area of the circle: %.2f"\n,area);
    printf("Circumference of the circle: %.2f",circum);
           
    return 0;
}

//output:
//Enter the radius of the circle:4
//Area of the circle: 50.24
//Circumference of the circle: 25.12
