//write a function to calculate percentage of a student from marks in science ,math &sanskrit.











#include<stdio.h>

int calcpercentage(int science,int math,int sanskrit);

int main(){
    int sc=98;
    int math=95;
    int sanskrit=99;

    printf("percentage is: %d",calcpercentage(sc,math,sanskrit));
    return 0;
}

int calcpercentage(int science, int math, int sanskrit){
    return ((science+ math + sanskrit)/3);
}

