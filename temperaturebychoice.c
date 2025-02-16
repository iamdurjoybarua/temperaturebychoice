#include <stdio.h> // Include standard input/output library for functions like printf and scanf

int main() {
    int choice; // Declare an integer variable 'choice' to store the user's menu selection.
    float temperature, converted_temperature; // Declare floating-point variables 'temperature' and 'converted_temperature' to store the input and converted temperatures.

    printf("Temperature Conversion Menu:\n"); // Display the temperature conversion menu to the user.
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): "); // Prompt the user to enter their choice.
    scanf("%d", &choice); // Read the user's choice and store it in the 'choice' variable. %d is the format specifier for integers.

    printf("Enter the temperature: "); // Prompt the user to enter the temperature.
    scanf("%f", &temperature); // Read the temperature and store it in the 'temperature' variable. %f is the format specifier for floats.

    switch (choice) { // Use a switch statement to perform the appropriate conversion based on the user's choice.
        case 1: // Celsius to Fahrenheit
            converted_temperature = (9.0 / 5.0) * temperature + 32.0; // Apply the conversion formula. Using floating-point literals (9.0, 5.0, 32.0) ensures accurate calculations.
            printf("Temperature in Fahrenheit: %.2f\n", converted_temperature); // Print the converted temperature, formatted to two decimal places.
            break; // Exit the switch case.

        case 2: // Fahrenheit to Celsius
            converted_temperature = (5.0 / 9.0) * (temperature - 32.0); // Apply the conversion formula.
            printf("Temperature in Celsius: %.2f\n", converted_temperature);
            break;

        case 3: // Celsius to Kelvin
            converted_temperature = temperature + 273.15; // Apply the conversion formula.
            printf("Temperature in Kelvin: %.2f\n", converted_temperature);
            break;

        case 4: // Kelvin to Celsius
            converted_temperature = temperature - 273.15; // Apply the conversion formula.
            printf("Temperature in Celsius: %.2f\n", converted_temperature);
            break;

        case 5: // Fahrenheit to Kelvin
            converted_temperature = (9.0 / 5.0) * (temperature - 273.15) + 32.0; // Apply the conversion formula.
            converted_temperature = (5.0 / 9.0) * (converted_temperature - 32.0) + 273.15; //Convert to celsius first and then to Kelvin.
            printf("Temperature in Kelvin: %.2f\n", converted_temperature);
            break;

        case 6: // Kelvin to Fahrenheit
            converted_temperature = temperature - 273.15;  //Apply the conversion formula.
            converted_temperature = (9.0 / 5.0) * converted_temperature + 32.0; //Convert to fahrenheit.
            printf("Temperature in Fahrenheit: %.2f\n", converted_temperature);
            break;

        default: // Handle invalid choices.
            printf("Invalid choice. Please enter a number between 1 and 6.\n");
    }

    return 0; // Return 0 to indicate successful program execution.
}
