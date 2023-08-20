#include <stdio.h>

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit to Celsius Table\n");
    while(fahr <= upper) {
        // celsius = 5 * (fahr - 32) / 9;
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    /*
    integer division truncates
    would be truncated to zero
    */
    float truncated = 5 / 9;
    printf("%f", truncated);


    //printf("The Fahrenheit value is %d, and the Celsius value is %d", fahr, celsius);
}
