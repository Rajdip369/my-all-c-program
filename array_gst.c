#include<stdio.h>
int main()
{

    float marks[3];

    printf("Enter 3 prices: ");
    scanf("%f",&marks[0]);
    scanf("%f",&marks[1]);
    scanf("%f",&marks[2]);
    

    printf("your 1st item price is:%f\n",marks[0]+(0.18*marks[0]));
    printf("your 2nd item price is:%f\n",marks[1]+(0.18*marks[1]));
    printf("your 3rd item price is:%f\n",marks[2]+(0.18*marks[2]));

    return 0;
    
}