#include<stdio.h>
#include<stdlib.h>



int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount =0;
    int guessLimit=3;
    int outOfguesses=0;
    while (guess != secretNumber && outOfguesses==0 )
    {
        if(guessCount<guessLimit)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        

            }else{
            outOfguesses = 1;
            
            }


    }    
        
        if (outOfguesses ==1)
        {
        printf("you have lost");
            /* code */
        }else{

        printf("guessed correct!");
        }
    
        
    

 
    return 0;
}
