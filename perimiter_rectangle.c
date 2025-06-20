#include<stdio.h>
int main(){
    int perimeter,a,b;
    printf("Enter the value of A ");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    perimeter=2*(a+b);
    printf("perimeter of Rectangle is:%d",perimeter);
    return 0;
}