# Temperature Conversion Program (C)

This C program allows the user to convert temperatures between Celsius, Fahrenheit, and Kelvin scales.

## Description

The program presents a menu to the user with the following options:

1.  Celsius to Fahrenheit
2.  Celsius to Kelvin
3.  Fahrenheit to Celsius
4.  Fahrenheit to Kelvin
5.  Kelvin to Celsius
6.  Kelvin to Fahrenheit

The user selects an option, and the program prompts for the temperature value.  It then performs the conversion and displays the result.

## How to Compile and Run

1.  **Save the code:** Save the C code in a file named `temperaturebychoice.c` (or any other name with a `.c` extension).

2.  **Compile:** Open a terminal or command prompt and use a C compiler (like GCC) to compile the code.  Navigate to the directory where you saved the file and run the following command:

    ```bash
    gcc temperaturebychoice.c -o temperaturebychoice
    ```

    This will create an executable file named `temperaturebychoice` (or `temperaturebychoice.exe` on Windows).

3.  **Run:** Execute the compiled program by running the following command in the terminal:

    ```bash
    ./temperaturebychoice  # On Linux/macOS
    temperaturebychoice.exe # On Windows
    ```

4.  **Interaction:** The program will display the menu. Enter the number corresponding to your desired conversion and press Enter.  You will then be prompted to enter the temperature value.

5.  **Output:** The program will display the converted temperature.
