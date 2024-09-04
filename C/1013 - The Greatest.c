#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b,c, maiorab, maiorac;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maiorab = (a + b + abs(a-b))/2;
    maiorac = (maiorab + c + abs (maiorab -c))/2;
    
    printf("%d eh o maior\n", maiorac);

    return 0;
}
