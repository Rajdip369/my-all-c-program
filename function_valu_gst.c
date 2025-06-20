#include<stdio.h>
void calculateprice(float value);
int main(){
    float value; 
    printf("Enter the value: ");
    scanf("%f",&value);

    calculateprice(value);

    printf("value is :%f",value);
    
    return 0;

}
void calculateprice(float value){
    value=value+(0.8*value);
    printf("Final price in 18persent gst is: %f\n",value);
}