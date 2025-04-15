#include <stdio.h>
 
int main() {
    char nomeVend[20];
    float salario, valorVend;
    
    fflush(stdin);
    fgets(nomeVend, 20, stdin);
    fflush(stdin);
    
    scanf("%f", &salario);
    scanf("%f", &valorVend);
    
    printf("TOTAL = R$ %.2lf\n", salario + (valorVend * 0.15));
 
    return 0;
}
