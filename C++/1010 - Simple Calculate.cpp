#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int codProd1, unidProd1, codProd2, unidProd2;
    float valorProd1, valorProd2;
    
    cin >> codProd1 >> unidProd1 >> valorProd1;
    cin >> codProd2 >> unidProd2 >> valorProd2;
    
    printf("VALOR A PAGAR: R$ %.2f\n",(unidProd1 * valorProd1) + (unidProd2 * valorProd2)); 

 
    return 0;
}