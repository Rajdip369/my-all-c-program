#include<stdio.h>
int main()
{
    int marks[3];

    printf("Enter your physics mark: ");
    scanf("%d",&marks[0]);
    printf("Enter your chemistry mark: ");
    scanf("%d",&marks[1]);
    printf("Enter your math mark: ");
    scanf("%d",&marks[2]);
    
    printf(" your physic is:%d\n your chemistry is:%d\n your math is:%d\n",marks[0],marks[1],marks[2]);


    return 0;
}