#include <stdio.h>

int main(void){

    int number = 5;
    int guess;

    do {
    printf("What's your guess? ");
    scanf("%i", &guess);

    if (guess != number) {
        printf("Wrong guess!.\n");
    }
    
    } while (guess != number);
    
    printf("You're correct!");

return 0;

}