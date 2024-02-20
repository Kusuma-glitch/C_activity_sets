  //Write a program to find if a triangle is scalene.

// A triangle is scalene if all the three sides of the triangle are not equal to one another

#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int side1, side2, side3, isscalene;
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();
    isscalene = check_scalene(side1, side2, side3);
    output(side1, side2, side3, isscalene);
    return 0;
}

int input_side()
{
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c)
{
    if (a != b && b !=c && a !=c )
    return 1;
    else
    return 0;
}


void output(int a, int b, int c, int isscalene)
{
    if(isscalene)
    printf("Triangle with sides %d, %d, %d is", a, b, c);
    if (isscalene){
        printf("scalene.\n");
    }
    else
    {
        printf("not scalene.\n");
    }
}
