#include<stdio.h>
int main()
{
    int n;
    printf("Enter your mark: ");
    scanf("%d",&n);
    
    if(n>=30 && n<100)
    printf("You are pass. ");

    else if(n>100)
    printf("Thik se likh bkl");

    else
    printf ("You are fail better luck next time. ");

    return 0;
}