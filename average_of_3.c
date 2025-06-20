#include<stdio.h>
int main()

//part1
{   
int average,a,b,c;
printf("Enter the 1st number: ");
scanf("%d",&a);

printf("Enter the 2nd number: ");
scanf("%d",&b);

printf("Enter the 3rd number: ");
scanf("%d",&c);

//part2
average=(a+b+c)/3;

//part3
printf("Your average of 3 number is: %d",average);

return 0;
}