#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}

//output:
//Enter a character: P
//ASCII value of P = 80
