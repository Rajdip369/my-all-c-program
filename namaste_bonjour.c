#include<stdio.h>
//PART1
void namaste();
void bonjour();
void THIK();
0
//PART2
int main() 
{
    printf("If you are love me press i or you are not love me press s : ");
    char ch;
    scanf("%c",&ch);
    
    if(ch=='i')
   namaste(); 

   else if(ch=='s')
   bonjour();

   else 
     THIK(); 
         
    return 0;
}

//PART3
void namaste(){
    printf("i love you\n");
  
}
void bonjour(){
    printf("why-_-\n");

}
void THIK(){
    printf("THIK se likho baby");
    
}