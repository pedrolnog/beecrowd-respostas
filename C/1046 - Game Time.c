#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (24 - (a - b) > 24) {
        printf("O JOGO DUROU %d HORA(S)", 24 - (a - b) - 24);
    } else {
        printf("O JOGO DUROU %d HORA(S)", 24 - (a - b));
    }

    return 0;
}