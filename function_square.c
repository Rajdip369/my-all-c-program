#include<stdio.h>

float squarearea(float side);

int main(){
    int side;
    printf("Enter the number: ");
    scanf("%f",&side);
    
    printf("area is: %f",squarearea( side));

    return 0;
}
 float squarearea(float side){ 
   side= side*side;
    
}