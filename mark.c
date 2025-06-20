#include<stdio.h>
int main()
{
  int n;
  printf("enter your mark: ");
  scanf("%d",&n);

  if(n>100)
  printf("BKL THIK SE LIKH");
  else if(n==100||n>=80)
  printf("Your grate is : A+ ");
  else if(n==79|| n>=60)
  printf("Your grate is: A ");
  else if(n==59||n>=40)
  printf("Your grate is: B ");
  else if(n==39||n>=30)
  printf("Your grate is: c ");
  else
  printf("You are fail batter luck next time");

  return 0;
}
