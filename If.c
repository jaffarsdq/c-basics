#include<stdio.h>
#include<stdlib.h>

int max (int num1,int num2,int num3  ){
    int result;
    if(num1 >=num2 && num1>=num3){
    return result=num1;
        
    }else if (num2>=num1 && num2>=num3){
        return result=num2;
    }else {
        return result=num3;
    }
}

int main()
{
    printf("%d",max(100,2,3));
    return 0;
}