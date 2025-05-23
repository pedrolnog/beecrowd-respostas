#include <stdio.h>

int main() {
    int a, b, c, i, orig[3], temp;

    scanf("%d %d %d", &a, &b, &c);

    orig[0] = a;
    orig[1] = b;
    orig[2] = c;

    for (i = 0; i < 3; i++) {
        if (orig[i] > orig[i + 1] && i + 1 < 3) {
             temp = orig[i+1];
             orig[i+1] = orig[i];
             orig[i] = temp;
        }
    }

    for (i = 0; i < 3; i++) {
        if (orig[i] > orig[i + 1] && i + 1 < 3) {
             temp = orig[i+1];
             orig[i+1] = orig[i];
             orig[i] = temp;
        }
    }

    printf("%d\n%d\n%d\n\n", orig[0], orig[1], orig[2]);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}