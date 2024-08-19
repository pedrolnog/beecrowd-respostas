#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    float num;
    double intervalos[5] = {0, 25, 50, 75, 100};
    
    cin >> num;
    
    for (int i = 0; i < 5; i++) {
        if (num <= intervalos[i] && intervalos[i] == 25) {
            printf("Intervalo [%.0f,%.0f]\n", intervalos[i-1], intervalos[i]);
            break;
            
        } else if (num <= intervalos[i] && intervalos[i] > 25) {
            printf("Intervalo (%.0f,%.0f]\n", intervalos[i-1], intervalos[i]);
            break;
            
        } else if (num < 0 || num > 100){
            cout << "Fora de intervalo\n";
            break;
        }
    }
 
    return 0;
}