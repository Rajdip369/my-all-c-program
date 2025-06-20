//WAP to take numbers as input until it's a odd number. 
#include<stdio.h>
int main()
{
    int n;
    do{
    printf("Enter the number: ");
    scanf("%d",&n);
    printf(" %d\n",n);

    if(n%2!=0)
    {
        break;
    }

     

     }while(1);
     
            
      
      printf("This is your odd number.",n);
      return 0;
   
}

//keep taking numbers as input from user until user enters an odd number.

