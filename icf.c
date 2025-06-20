#include<stdio.h>
int main(){
//part1
int integer;
char charecter;
float point;
 //part2
 printf("Enter the value of integer: ");
 scanf("%d",&integer);
 
 getchar();
 printf("Enter the charecter: ");
 scanf("%c",&charecter);

 printf("Enter the point: ");
 scanf("%f",&point);
//part3
printf("the integer is:%d\n",integer);
printf("the charecter is:%c\n",charecter);
printf("the float number is:%f\n",point);

return 0;
}