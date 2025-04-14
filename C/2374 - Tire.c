#include <stdio.h>
 
int main() {
    int pressaoDesejada, pressaoBomba;
    
    scanf("%d", &pressaoDesejada);
    scanf("%d", &pressaoBomba);
    
    printf("%d\n", pressaoDesejada - pressaoBomba);
 
    return 0;
}
