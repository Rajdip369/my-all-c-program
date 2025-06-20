#include<stdio.h>
int main()
{
    float num;

    printf("Enter the number: ");
    scanf("%f",&num);

    if(num!=(int)num)
        printf("this number is not divisible by 2 "); 

    else if((int)num%2==0)
    
        printf("This number is divisible by 2 ");
    
    else
    {
        printf("This number is not divisible ");
    }

    return 0;
}





// #include<stdio.h>
// int main()
// {
//     float num;

//     printf("Enter the number: ");
//     scanf("%f",&num);

//     if(num/2==0)
//     {
//         printf("This number is divisible by 2 !");
//     }
//     else
//     {
//         printf("This number is not divisible! ");
//     }

//     return 0;
// }