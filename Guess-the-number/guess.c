#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/* ========================
        UTILITIES
   ======================== */
// Add delay to the compile
void delay(int ms){
    usleep(ms * 1000);
}
// Clear the terminal
void clear(){
    system("clear");
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
            delay(2000);
            clear();
            continue;
        } else if (retry == 'y' || retry == 'Y') {
            return;   // Restart the mini game
        } else if (retry == 'n' || retry == 'N'){
            exit(0);  // Close the program directly
        } else {
            printf("Invalid option");
        }
    }  
}
void play() {
    int secret = machine_number();
    int attempts = 1;

    clear();
    printf("=== GUESS THE NUMBER ===\n");
    printf("I thought of a number between 1 and 100.\n");
    printf("You have 10 attempts!\n\n");
    delay(3000);

    while (attempts <= 10) {
        int guess;
        clear();
        printf("\nAttempt %d|10", attempts);
        printf("\nYour guess: ");

        if (scanf("%d", &guess) != 1) {
            while (getchar() != '\n');
            continue;
        }

        if (guess == secret) {
            printf("\nCorrect! You won in %d attempts!", attempts);
            delay(2000);
            return;  // encerra a rodada
        } else if (guess > secret) {
            printf("\nToo high! Try lower.");
        } else {
            printf("\nToo low! Try higher.");
        }

        if (attempts == 10) {
            printf("\nYou lost! The number was %d", secret);
            delay(2000);
            return;  // encerra a rodada
        }

        attempts++;
        delay(2000);
    }
}
/* ========================
        MAIN
   ========================*/
// The program will run in this part
int main(){
    while (1) {
        play();
        restart();
    }
    return 0;
}