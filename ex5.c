#include <stdio.h>

void sayHello(char name[])//printing function
   {
       printf("hello %s", name);//printing 
       
   }
   
int main()
{
    char name[100];
    printf("Please enter your name : ");
    scanf("%99s",name);//getting name
    sayHello(name);//running function
   
    return 0;
}
