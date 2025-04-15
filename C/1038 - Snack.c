#include <stdio.h>
 
int main() {
    int cod;
    float quant;
    
    scanf("%d %f", &cod, &quant);
    
    switch (cod) {
        case 1: 
            printf("Total: R$ %.2f\n", 4 * quant);
            break;
        case 2:
            printf("Total: R$ %.2f\n", 4.5 * quant);
            break;
        case 3:
            printf("Total: R$ %.2f\n", 5 * quant);
            break;
        case 4:
            printf("Total: R$ %.2f\n", 2 * quant);
            break;
        case 5:
            printf("Total: R$ %.2f\n", 1.5 * quant);
            break;
    }
 
    return 0;
}