#include<stdio.h>
int main()
{
    //part1
    float age;
    printf("Enter the your age: ");
    scanf("%f",&age);

    //part2
    if(age>=18)
    {
        printf("You are ADULT! ");
    }
    else if(age>13)
    {
         printf("You are TEENAGER! ");
    }
    else if(age<1)  
    {
         printf("You are sperm");
    }
    else 
    {
        printf("You are CHILD! ");
    }

    return 0;
}