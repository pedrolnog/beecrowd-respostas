#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    string nome;
    float salario, valorVendido;
    
    cin >> nome;
    cin >> salario;
    cin >> valorVendido;
    
    printf("TOTAL = R$ %.2f\n", salario + (0.15 * valorVendido));
    
    return 0;
}