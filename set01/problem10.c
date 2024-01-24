#include<stdio.h>
#include <string.h>
void input_two_strings(char*string1,char*string2);
int comparestrings(char*string1,char*string2);
void output(char*string1,char*string2,int result);
int main()
{
    char string1[100],string2[100];
    input_two_strings(string1,string2);
    int result=comparestrings(string1,string2);
    output(string1,string2,result);
    return 0;
}
void input_two_strings(char*string1,char*string2)
{
    printf("enter the first string");
    scanf("%s",string1);
    printf("wnter the secomd string");
    scanf("%s",string2);
}
int comparestrings(char*string1,char*string2)
{
    int result=strcmp(string1,string2);
    return result;
}
void output(char*string1,char*string2,int result)
{
    if(result<0)
    {
        printf("%s is lesser than %s",string1,string2);
    }
    else if(result>0)
    {
         printf("%s is greater than %s",string1,string2);
    }
    else if(result ==0)
    {
        printf("%s is equal to %s",string1,string2);
    }
}