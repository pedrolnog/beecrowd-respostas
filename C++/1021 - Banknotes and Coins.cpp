#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    float dinheiro;
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    
    cin >> dinheiro;
    dinheiro = dinheiro * 100;
    

    cout << "NOTAS:\n";
    for (int i : notas) {
        printf("%d nota(s) de R$ %.2f\n", (int) dinheiro/i, (float) (i/100));
        dinheiro = fmod(dinheiro, i);
    }
    
    
    cout << "MOEDAS:\n";
    for (int i : moedas) {
        printf("%d moeda(s) de R$ %.2f\n", (int) dinheiro/i , ((float) i/100));
        dinheiro = fmod(dinheiro, i);
    }

    return 0;
}