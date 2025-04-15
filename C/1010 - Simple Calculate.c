#include <stdio.h>
 
int main() {    
    int code1, num1, code2, num2;
    float preco1, preco2;
    
    scanf("%d %d %f", &code1, &num1, &preco1);
    scanf("%d %d %f", &code2, &num2, &preco2);
 
    printf("VALOR A PAGAR: R$ %.2f\n", (num1 * preco1) + (num2 * preco2));
 
    return 0;
}
