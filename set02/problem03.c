#include <stdio.h>
 //Write a program find whether a number is a composite number

// A Composite number has more than 2 factors.

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int number, result;
    number = input_number();
    result = is_composite(number);
    output(number, result);
    return 0;
}

int inout_number()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    return num;
}

int is_composite(int n)
{
    int i, factors = 0;
    for (i=1; i <=n; i++)
    {
        if (n%i==0)
        {
            factors++;
        }
    }
    if(factors>2)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void output(int n, int result){
    if(result){
        printf("%d is a composite number.\n", n);
    }
    else{
        printf("%d is a prime number.\n", n);
    }
}