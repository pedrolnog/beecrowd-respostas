#include <stdio.h>
 
int main() {
    int distTotal;
    float gasGasta;
    
    scanf("%d", &distTotal);
    scanf("%f", &gasGasta);
    
    printf("%.3f km/l\n", distTotal / gasGasta);
 
    return 0;
}
