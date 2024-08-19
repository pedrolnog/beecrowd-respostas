#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int segundosTotais;
    int unidade[] = {60, 60};
    
    cin >> segundosTotais;
    
    int horas = segundosTotais / 3600;
    int minutos = (segundosTotais % 3600) / 60;
    int segundos = ((segundosTotais % 3600) % 60);
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}