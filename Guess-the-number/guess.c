#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* ========================
        UTILITIES
   ======================== */
// Add delay to the compile
void delay(int ms){
    Sleep(ms);
}
// Clear the terminal
void clear(){
    system(_WIN32 ? "cls" : "clear");
}
// Machine's number
int machine_number(){
    srand(time(NULL));        // Random seed
    int secret = rand() % 100 + 1; // Number between 1 and 100
    return secret;
}
// Restart the game
void restart(){
    while (1)
    {
        char retry;
        printf("\nWould like to play it again? [y/n]: ");

        if (scanf(" %c", &retry) != 1) {
            printf("Type [Y]es or [N]ot!");
            while (getchar() != '\n');
            Sleep(2000);
            clear();
            continue;
        } else if (retry == 'y' || retry == 'Y') {
            main();
            return;   // Restart the mini game
        } else if (retry == 'n' || retry == 'N'){
            exit(0);  // Close the program directly
        } else {
            printf("Invalid option");
        }
    }  
}

/* ========================
        MAIN
   ========================*/
// The program will run in this part
int main(){
    int secret = machine_number();   // gera uma vez só
    int attempts = 1;

    clear();
    printf("=== GUESS THE NUMBER ===\n");
    printf("I thought of a number between 1 and 100.\n");
    printf("You have 10 attempts!\n\n");
    Sleep(3000);
    while (attempts <= 10)
    {
        int guess;
        clear();
        printf("\nAttempt %d|%d", attempts, 10);
        printf("\nYour guess: ");

        if (scanf("%d", &guess) != 1){      // Check user input | Just numbers
            while (getchar() != '\n');   // Clears o buffer
            continue;
        }

        if (guess == secret)
        {
            printf("\nCorrect! You won in %d attempts!", attempts);
            Sleep(2000);
            clear(); 
            restart();  
        } else if (guess > secret)
        {
            printf("\nToo high! Try lower.");
            Sleep(2000);
        } else 
        {
            printf("\nToo low! Try higher.");
            Sleep(2000);
        }
        
        if (attempts == 10) {
            printf("\nYou lost! The number was %d", secret);
            Sleep(2000);
            restart();
        }
        attempts++;
    }
    return 0;
}