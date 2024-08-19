#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int maiorAB = (a + b + abs(a - b))/2;
    
    int maiorXC = (maiorAB + c + abs(maiorAB - c))/2;
    cout << maiorXC << " eh o maior\n";
}