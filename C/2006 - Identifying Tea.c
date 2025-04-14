#include <stdio.h>
 
int main() {
    int cha, resp[5], i, n = 0;
    
    scanf("%d", &cha);
    scanf("%d %d %d %d %d", &resp[0], &resp[1], &resp[2], &resp[3], &resp[4]);
 
    for (i = 0; i < 5; i++) {
        if (resp[i] == cha) {
            n++;
        }
    }
    
    printf("%d\n", n);
 
    return 0;
}
