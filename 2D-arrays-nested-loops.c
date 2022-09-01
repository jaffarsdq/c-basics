#include<stdio.h>
#include<stdlib.h>



int main()
{
    int nums[3] [2] = 
    {
         {3,4},
         {2,0},
          {7,3}
                      
    };
    // printf("%d", nums[2][0]);

    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d", nums[i][j]);
        }
        
        printf("\n");
    }
    
 
    return 0;
}
 