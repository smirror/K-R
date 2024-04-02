#include <stdio.h>

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Fahr-Celsius table\n");
    while (celsius <= upper) {
        fahr = 9 * celsius / 5 + 32;
//        celsius = 5 * (fahr - 32) / 9;
        printf("%d F\t%d C\n", fahr, celsius);
        celsius += step;
    }
}