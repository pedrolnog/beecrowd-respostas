#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    float tempoGasto, velocidadeMedia;
    
    cin >> tempoGasto;
    cin >> velocidadeMedia;
    
    printf("%.3f\n", (tempoGasto * velocidadeMedia)/12);
    
    return 0;
}