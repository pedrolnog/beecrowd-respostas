#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int idade;
    int unidades[] = {365, 30, 1};
    string data[] = {"ano(s)", "mes(es)", "dia(s)"};
    
    cin >> idade;
    
    for (int i = 0; i < 3; i++) {
        cout << idade / unidades[i] << " " << data[i] << "\n";
        idade = idade % unidades[i];
    }

    return 0;
}