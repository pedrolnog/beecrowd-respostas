#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    float x1, y1, x2, y2;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    printf("%.4f\n", sqrt(pow((x2-x1), 2) + pow((y2 - y1), 2)) );
 
    return 0;
}