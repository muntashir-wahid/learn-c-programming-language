#include <stdio.h>

main() {
    // Celsius to Fahrenheit Table

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius to Fahrenheit Table\n");

    while(celsius <= upper) {
            fahr = (9.0 * celsius / 5.0) + 32.0;
            printf("%3.0f %6.1f\n", celsius, fahr);
            celsius += step;
    }
}
