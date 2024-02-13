#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, guessno=1;
    srand(time(0));
    number= rand()%100 + 1; //Generate a random number between 1 to 100.
    // printf("The number is %d\n",number);
    //keep running the loop until the number is gussed.
    do
    {
        printf("Enter the number in between 1 to 100:-  \n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Enter a lower number\n\n");
        }
        else if (guess<number)
        {
            printf("Enter a greater number\n\n");
        }
        else
        {
            printf("\nCorrect! You guessed the correct no.%d in %d attempts.\n",number,guessno);
        }
        guessno++;
        
    } while (number!= guess);
    

    
    return 0;
}