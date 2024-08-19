#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double a, b, c, delta, resposta1, resposta2;
    
    cin >> a >> b >> c;
    
    delta = (b * b) - (4 * a * c);

    if (a == 0) {
        cout << "Impossivel calcular\n";
    } else if (delta < 0) {
        cout << "Impossivel calcular\n";
    } else {
        resposta1 = ((-b) + sqrt(delta)) / (2 * a);
        resposta2 = ((-b) - sqrt(delta)) / (2 * a);
        
        printf("R1 = %.5f\n", resposta1);
        printf("R2 = %.5f\n", resposta2);
    }
    
    return 0;
}