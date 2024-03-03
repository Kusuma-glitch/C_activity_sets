//Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.


#include<stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{

    int n;
    n = input_array_size();
    int a[n+1];
    init_array(n+1,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the upper limit(n):");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n])
{
    for (int i=0; i<n; i++)
    {
        a[i]=1;
    }
}

void erotosthenes_sieve(int n, int a[n])
{
    if (n<=1)
    {
        return;
    }
    a[0] = a[1]=0;
    for (int i=2; i * i<=n; i++)
    {
        if(a[i] == 1)
        {
            for (int j=i*i; j<=n; j+=i)
            {
                a[j]=0;
            }
        }
    }
}

void output(int n, int a[n]) 
{
    printf("Prime numbers less than or equal to %d: ", n);
    for (int i = 2; i < n; i++)
    {
        if (a[i] == 1) 
        {
            printf("%d,",i);
        }
    }
    printf("\n");
}