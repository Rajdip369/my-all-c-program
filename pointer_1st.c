#include<stdio.h>

int main()
{
int x;
int *ptr;

ptr =&x;
*ptr = 0; //x=0

printf("x=%d\n", x);//0
printf("*ptr = %d\n",*ptr);//0

*ptr+= 5; // x=5
printf("x=%d\n",x);//5
printf("*ptr = %d\n",*ptr);//5

(*ptr)--;
printf("X=%d\n",x);
printf("*ptr = %d\n",*ptr);

return 0;

} 





// #include<stdio.h>
//  int main()
// {
//     int age=21, *ptr;;
//     ptr=&age;
    
//  //address of block

//     printf("%u\n",&age);
//     printf("%u\n",*ptr);
//     printf("%u\n",&ptr);

//  //%d,%C are useing for this address (optional)

//     return 0;

// }





//DEMO...

// #include<stdio.h>

// int main(){
    

//     int x;
//    // x=5;
//     int *ptr=&x;

// printf("%d",x);


// return 0;


// } 








// #include<stdio.h>
// int main()
// {
//     int age=21;
//     int*ptr=&age;
//     int _age =*ptr;

//     printf("%d",_age);
//     return 0;
// }