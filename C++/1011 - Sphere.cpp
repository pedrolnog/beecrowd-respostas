#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    double pi = 3.14159, R;
    
    cin >> R;
    
    printf("VOLUME = %.3f\n", (4 * pi * (R * R * R))/3.0);

    return 0;
}