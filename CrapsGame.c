/*Simulation of Craps game*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SEED 12345

void play(void);
int throw(void);

int main(){
    char answer = 'Y';

    printf("Welcome to the Game of Craps \n \n");
    printf("To throw the dice, press Enter \n \n");

    srand(SEED);

    while(toupper(answer)!='N'){
        play();
        printf("\nDo you want to play again? (Y/N)");
        scanf(" %c", &answer);
        printf("\n");
    }
    printf("Bye, have a nice day");
}

void play(void){
    int score1, score2;
    char dummy;

    printf("\n Please throw the dice ...");
    scanf("%c", &dummy);

    printf("\n");
    score1 = throw();
    printf("\n%2d", score1);

    switch (score1){
        case 7: /*win on the first throw*/
        case 11:
        printf(" Congratulations! You WIN on the first throw \n");
        break;
        case 2:
        case 3:
        case 12:
            printf(" Sorry you LOSE on the first throw\n");
            break;
        case 4: /*additional throw are required.*/
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
        do {
            printf(" Throw the dice again\n");
            scanf("%c", &dummy);
            score2 = throw();
            printf("\n%2d", score2);
        } while (score2 != score1 && score2 != 7);

        if(score2 == score1) 
        printf(" You WIN by matching your first score\n");
        else
        printf("You LOSE by falling to match your first score\n ");
        break;
    }
    return;
}

int throw(void){
    int n1, n2;
    n1 = 1 + (int) (rand()%6);
    n2 = 1 + (int) (rand()%6);
    return(n1 + n2);
}