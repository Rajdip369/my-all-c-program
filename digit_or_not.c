#include<stdio.h>
int main()
{
    //part1
 char cha;
 printf("Enter the character: ");
 scanf("%c",&cha); 

   //part2
 if(cha>='0' && cha<='9')
 {
  printf("This character is digit. ");
 }
 else
 {
  printf("This character is not digit. ");
 }

 return 0;
}

