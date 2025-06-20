//Write a function to print n terms of the fibonachi sequence.








#include<stdio.h>

int fib (int n);

int main(){
    printf("%d",fib(6));
    return 0;
} 

int fib(int n){
    if(n==0){
    return 0;
}
 if(n == 1){
    return 1;
}

int fibNm1 = fib(n-1);
int fibNm2= fib(n-2);
int fibN = fibNm1 +fibNm2;
//print("fib of %d is \n",n,fibN);
return fibN;
}