#include <stdio.h>

int main() {
    int fahr;
    float celsius;
    
    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("======================================\n\n");
    printf(" °F       °C\n");
    
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d     %6.1f\n", fahr, celsius);
    }
    
    printf("\nTemperature conversion completed.\n");
    
    return 0;
}