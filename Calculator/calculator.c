#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Adds the library that used usleep
#include <ctype.h> // Adds a library that checks the data

// Clean the terminal
void clear(){
    system("clear");
}

// Adds delay to the program
void delay_seconds(int s){ // This arg will determinate the milisecond 
    sleep(s * 1000);
}

// Print the menu to the terminal
int menu(){
    int choice;
    printf("Welcome to our calculator!");
    printf("\n1 - Start the program");
    printf("\n0 - Exit");
    printf("\nType here: ");
    if (scanf("%d", &choice) != 1) {
        // Clear the buffer and discard it until the Enter
        while (getchar() != '\n');
        return -1;
    }    
    return choice;    
}

// The calculator app
char calculator(){
    while (1){
        char op; // Var named operator - short form = op
        clear();
        printf("First of all, type the operator that'll be used in this calculator");
        printf("\nChoose one of these:");
        printf("\n[+]->Add [-]->Decrease [*]->Multiplicate [/]->Divide");
        printf("\nType here: ");
        scanf(" %c", &op);
        if (isdigit(op)){
            clear();
            printf("Type only the operators");
            delay_seconds(3);
        } else {
            return op;
        }
    }
}

// Verify the operator input if not one else return invalid
char verifier(char calc){
    switch (calc){
        case '+':
        case '-':
        case '*':
        case '/':
            return calc;
        default:
            printf("This doesn't exist\n");
            return '0'; // ou tratar erro
    }
}

// These are the calculations functions
float add(float number1, float number2){
    return number1 + number2;
}

float subtract(float number1, float number2){
    return number1 - number2;
}

float multiply(float number1, float number2){
    return number1 * number2;
}

float divide(float number1, float number2){
    return number1 / number2;   
}

// The calculations result
void number_input(char op){
    while (1){
        float number1, number2, result;
        clear();
        printf("First number: ");
        scanf("%f", &number1);
        printf("Second number: ");
        scanf("%f", &number2);
        if (op == '/' && number2 == 0) { // It checks if the you're dividing a number to 0
            printf("It's impossible to divide by 0\n");
            delay_seconds(2);
            continue;
        }
        switch (op){
            case '+':
                result = add(number1, number2); break;
            case '-':
                result = subtract(number1, number2); break;
            case '*':
                result = multiply(number1, number2); break;
            case '/':
                result = divide(number1, number2); break;
            default:
                printf("This doesn't exist");    
        }
        clear();
        printf("Result: %.2f\n", result);
        delay_seconds(2);
        break;
    }
}

// The main program will run in this part
int main(){
    while (1){
        clear();
        int choice = menu();
        switch (choice){
            case 1: {
                char op = verifier(calculator());
                if (op != '0') {
                    number_input(op);
                }
            }  
            case 0: 
                clear();
                printf("Okay exiting...");
                delay_seconds(2);
                clear();
                return 0;        
            default: 
                printf("\nInvalid option try again!");
                delay_seconds(2);
                clear();        
        } 
    }
    return 0;
}
