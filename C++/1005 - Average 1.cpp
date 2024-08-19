#include <stdio.h>
#include <iostream>
using namespace std;
 

int main() {
    double a, b, MEDIA;
    
    cin >> a;
    cin >> b;
    
    MEDIA = ((a * 3.5) + (b * 7.5)) / 11;
    
    printf("MEDIA = %.5f\n", MEDIA);
 
    return 0;
}