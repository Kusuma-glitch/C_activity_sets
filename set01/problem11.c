#include<stdio.h>
struct complex
{
    float real;
    float imaginary;
};
typedef struct complex Complex;
Complex input_complex();
Complex add_complex(Complex a,Complex b);
void output(Complex a,Complex b,Complex sum);

int main()
{
    Complex a=input_complex();
    Complex b=input_complex();
    Complex sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}
Complex input_complex()
{
    Complex c;
    printf("enter the real and imaginary part");
    scanf("%f %f",&c.real,&c.imaginary);
    return c;
}
Complex add_complex(Complex a,Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a,Complex b,Complex sum)
{
    printf("the sum of (%0.2f+%0.2fi)+(%0.2f+%0.2fi)=%0.2f+%0.2fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}


