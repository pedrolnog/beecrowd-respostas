#include <stdio.h>
 
int main() {
    float r;
    
    scanf("%f", &r);
    printf("VOLUME = %.3f\n", (4 * 3.14159 * (r * r * r))/3);
 
    return 0;
}
