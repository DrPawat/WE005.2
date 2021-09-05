#include<stdio.h>  

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return(n * factorial(n - 1));
}

void main()
{
    int number;
    int x;
    printf("Enter your factorial: ");
    scanf_s("%d", &number);

    x = factorial(number);
    printf("Factorial of %d is %d\n", number, x);
}