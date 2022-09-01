#include<stdio.h>
#include<stdlib.h>



int main(){

    char grade = 'F';

    switch (grade)
    {
    case 'A' :
        printf("you did great");
        break;
    case 'B' :
        printf("you did alright");
        break;
    case 'C' :
        printf("you did poorly");
        break;    
    case 'D' :
        printf("you did very bad");
        break;
    case 'F' :
        printf("you Failed");
        break;    
    default:
        printf("Invalid Grade");
        
    }
    
   
    return 0;
}