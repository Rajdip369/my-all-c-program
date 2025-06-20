//WAP to find factorial of n input by user
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int f=1;
    for(int i=1; n>0; i++)
    {
         f=f*n;
         n--;
    }

        printf( "%d",f);
    
    return 0;
}