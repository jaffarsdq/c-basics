#include<stdio.h>
#include<stdlib.h>



int main()
{
    double num1;
    char op ;
    double num2;
    

    printf("enter a number: ");
    scanf("%lf",&num1);
    printf("enter a operator: ");
    scanf(" %c", &op);
    printf("enter a number: ");
    scanf("%lf",&num2);

    if (op == '+'){
        printf("%f", num1 + num2  );
    } else if (op == '-'){
        printf(" %f", num1 - num2  );
    } else if (op == '*'){
        printf("%f", num1 * num2);
    } else if (op == '/' ){
        printf("%f", num1 / num2  );
    } else{
        printf("invalid Op");
    }
   
   
    
    
     
    return 0;
}