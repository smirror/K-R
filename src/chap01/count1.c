#include "stdio.h"

int main(){
    int c, nc;

    nc = 0;
    while ((c = getchar()) != EOF)
        ++nc;
    printf("%d", nc);
}