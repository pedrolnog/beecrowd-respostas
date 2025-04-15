#include <stdio.h>
 
int main() {
    int numFunc, horasTrab;
    float salario;
    
    scanf("%d", &numFunc);
    scanf("%d", &horasTrab);
    scanf("%f", &salario);
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numFunc, salario * horasTrab);
 
    return 0;
}
