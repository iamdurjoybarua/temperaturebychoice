#include <stdio.h>

int main() {
    int choice;
    float temperature, converted_temperature;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    switch (choice) {
        case 1:
            converted_temperature = (9.0 / 5.0) * temperature + 32.0;
            printf("Temperature in Fahrenheit: %.2f\n", converted_temperature);
            break;
        case 2:
            converted_temperature = (5.0 / 9.0) * (temperature - 32.0);
            printf("Temperature in Celsius: %.2f\n", converted_temperature);
            break;
        case 3:
            converted_temperature = temperature + 273.15;
            printf("Temperature in Kelvin: %.2f\n", converted_temperature);
            break;
        case 4:
            converted_temperature = temperature - 273.15;
            printf("Temperature in Celsius: %.2f\n", converted_temperature);
            break;
        case 5:
            converted_temperature = (9.0 / 5.0) * (temperature - 273.15) + 32.0;
            printf("Temperature in Fahrenheit: %.2f\n", converted_temperature);
            break;
        case 6:
            converted_temperature = (5.0 / 9.0) * (temperature - 32.0) + 273.15;
            printf("Temperature in Kelvin: %.2f\n", converted_temperature);
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 6.\n");
    }

    return 0;
}
