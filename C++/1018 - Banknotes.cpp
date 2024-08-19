#include <stdio.h>
#include <iostream> 
using namespace std;
 
int main() {
    int dinheiro;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    
    cin >> dinheiro;
    cout << dinheiro << "\n";
    
    for (int i : notas) {
        printf("%d nota(s) de R$ %d,00\n", dinheiro / i, i);
        dinheiro = dinheiro % i;
    }

    return 0;
}