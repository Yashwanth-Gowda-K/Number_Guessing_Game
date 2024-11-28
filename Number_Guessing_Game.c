#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int num , guess , attempts =0;
    srand(time(0));
    num = rand() %100 + 1;

    printf("Welcome to number guessing game\n");
    printf("I have selected a number b/w 1 and 100. Try to guess it!\n");

    do{
        printf("Enter your guess: ");
        scanf("%d",&guess);

        attempts++;

        if (guess > num){
            printf("Too high! Try again.\n");

        }
        else if (guess < num ) {
            printf("Too low ! Try again.\n");
        } else {
            printf("Conguratulation! You have guesssed the correct number in %d attempts.\n", attempts);

        }

    }while (guess != num);

    return 0;
}