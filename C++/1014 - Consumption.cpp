#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int distanciaTotal;
    float gasolGasta;
    
    cin >> distanciaTotal;
    cin >> gasolGasta;
    
    printf("%.3f km/l\n", distanciaTotal/gasolGasta);

 
    return 0;
}