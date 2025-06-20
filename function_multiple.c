#include<stdio.h>

int multiple (int n);



int main()
{ 
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    int r = multiple(n);
    printf("multiple is: %d\n",r);
    return 0;

}

 // call by value. 
int multiple(int n)
{

    return n * n;

}