#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    printf("MEDIA = %.1f\n", ((a * 2) + (b * 3) + (c * 5)) / 10);
 
    return 0;
}