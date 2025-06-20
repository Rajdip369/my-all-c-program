#include<stdio.h>
int main()
{
 int n;
 printf("Enter the year: ");
 scanf("%d",&n);
 if(n<0)
 printf("abe chudu tere bap ne v janam liya tha kay?");

 else if( n%4 == 0)

 printf("This is a leap year");

 else 
 printf("This is not a leap year");

 return 0;
}