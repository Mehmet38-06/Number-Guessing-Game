//
//  main.c
//  C deneme
//
//  Created by Mehmet Şahiner on 5.09.2022.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;
    
//    uses the current time (Epoch)
    srand(time(0));
    
    answer = (rand() % MAX) + MIN;
    
    do
    {
        printf("Please enter your guess : ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("Too high!\n");
        }
        
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        
        else
        {
            printf("You guessed the correct number.\n");
        }
        guesses++;
            
            
    }while(guess != answer);
    
    printf("*******************************\n");
    printf("Answer : %d\n", answer);
    printf("Guess Counter : %d\n", guesses);
    printf("*******************************\n");
    
    return 0;
}
