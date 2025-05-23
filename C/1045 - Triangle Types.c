#include <stdio.h>

int main() {
    float a, b, c, temp;
    int i;

    scanf("%f %f %f", &a, &b, &c);

    for (i = 0; i < 2;i++) {
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a < c) {
            temp = a;
            a = c;
            c = temp;
        }
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if ((a * a) == (b * b) + (c * c)) {
            printf("TRIANGULO RETANGULO\n");
        } else if ((a * a) > (b * b) + (c * c)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if ((a * a) < (b * b) + (c * c)) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if ((a == b && b != c) || (a != b && b == c)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    } 
}