//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the value of number1:\n");
    scanf("%d",&a);
    printf("Enter the value of number2:");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of %d and %d is %d", a, b,sum);
    return 0;
    
}