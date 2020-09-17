#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if((i%3==0 || i%10==3) && (i%7==0 || i%10==7))
            printf("FizzBuzz ");
        else if(i%3==0 || i%10==3)
            printf("Fizz ");
        else if(i%7==0 || i%10==7)
            printf("Buzz ");
        else 
            printf("%d ", i);
    }
    printf("\n");  
    return 0;     
}