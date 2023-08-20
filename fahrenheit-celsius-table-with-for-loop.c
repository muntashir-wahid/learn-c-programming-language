#include <stdio.h>

main() {
    printf("Fahrenheit to Celsius table\n");
    for(int fahr = 0; fahr <= 300; fahr+= 20){
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    printf("Fahrenheit to Celsius table reverse\n");
    for(int fahr = 300; fahr >=0; fahr-= 20){
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    printf("Hello world\n")
}
