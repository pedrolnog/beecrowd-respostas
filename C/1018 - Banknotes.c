#include <stdio.h>
 
int main() {
    int i, n, notas[7] = {10000, 5000, 2000, 1000, 500, 200, 100};
    
    scanf("%d", &n);
    printf("%d\n", n);
    n *= 100;

    for (i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", n/notas[i], notas[i]/100);
        n = n % notas[i];
    }
 
    return 0;
}
