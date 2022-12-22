#include <stdio.h>


void alan(int a, int b) {
    printf("Dikdörtgenin alanı %d\n", a * b);
}

void cevre(int a, int b) {
    printf("Dikdörtgenin çevresi %d\n", 2 * (a + b));
}

int main() {
    int a, b;
    printf("Dikdörtgenin uzunluğunu girin: ");
    scanf("%d", &a);
    printf("Dikdörtgenin genişliğini girin: ");
    scanf("%d", &b);
    alan(a, b);
    cevre(a, b);
    return 0;
}
