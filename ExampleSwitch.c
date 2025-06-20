#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c",&ch);//=5
switch (ch)
    {
    case 'a':
    case 'e':
    case 'i': printf("Its a vowel");
              break;
    
    default:printf("rajdip noob");
        break;
    }
}