#include "stdio.h"

int main(){
    int c;

    printf("%d\n", (getchar() != EOF));
    printf("%d\n", EOF);
    while ((c = getchar()) != EOF){
        putchar(c);
    }
}