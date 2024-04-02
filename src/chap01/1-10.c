#include "stdio.h"

int main() {
    int c, nb, nt, nn;

    nb = 0;
    nt = 0;
    nn = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nt += 1;
            printf("\\t");
        }
        if (c == '\\') {
            nb += 1;
            printf("\\\\");
        }
        if (c == '\n') {
            nn += 1;
            printf("\\n");
        } else {
            printf("%c", c);
        }
    }
    printf("back space: %d, tab: %d, \\n: %d", nb, nt, nn);
}