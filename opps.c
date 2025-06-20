#include<stdio.h>
void main()
{
    int size, i, key;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int array [size];
    printf("enter the array element: ");
    for(i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    printf("enter your choice: ");
    scanf("%d",&key);

    for (i=0; i<size; i++)
    {
        if (array[i]==key){
            printf("found success %d",key);
            break;
        }
    }
        if(i==size){
            printf("element %d is not found in the array",key);
        }
    
} 