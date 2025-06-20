#include<stdio.h>
int main()
{
    int age = 22;
    int _age = 23;
    int *ptr =&age;
    int *_ptr = &age;
    
    printf("%u,%u\ndifference =%u\n", ptr,_ptr,ptr-_ptr);
    printf("the specefic any number ");

    _ptr=&age;
    
    printf("comparison = %u\n", ptr == _ptr);

    return 0;

}