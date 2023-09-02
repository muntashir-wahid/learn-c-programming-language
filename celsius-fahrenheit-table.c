#include <stdio.h>

float calcFahrendeit(int celcius);

int main() {
    // Celsius to Fahrenheit Table

    float celsius;

    printf("Celsius to Fahrenheit Table\n");

    for(celsius = 0; celsius <= 300; celsius += 20) {
        printf("%3.0f %6.1f\n", celsius, calcFahrendeit(celsius));
    }

    return 0;
}

// Using Function

float calcFahrendeit(int celsius) {

    float fahr;

    fahr = (9.0 * celsius / 5.0) + 32.0;

    return fahr;
}
