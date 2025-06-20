#include<stdio.h>
int main()
{
float num;
printf("Enter the number: ");
scanf("%f",&num);
if(num<=1 || num!=(int)num )
printf("This number is not natural number. ");

else
printf("This number is a natural number. ");

return 0;
}