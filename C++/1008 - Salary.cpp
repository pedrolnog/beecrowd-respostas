#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int numeroFunc, horasTrab; 
    float valorHora;
    
    cin >> numeroFunc;
    cin >> horasTrab;
    cin >> valorHora;
    
    cout << "NUMBER = " << numeroFunc << "\n";
    printf("SALARY = U$ %.2f\n", horasTrab * valorHora);
    
    return 0;
}