//practice QS 32
//write afunction to convert celsius to fahrenheit.

#include<stdio.h>
float fahrenheitTemp(float celsius);

int main(){
    float n;
    printf("enter the temparature: ");
    scanf("%f",&n);
    float far = fahrenheitTemp(n);
    printf("fahrenheit is :%f\n",far);
    return 0;
}

float fahrenheitTemp(float celsius){
    float far= celsius *(9.0/5.0)+32;
    return far;

}