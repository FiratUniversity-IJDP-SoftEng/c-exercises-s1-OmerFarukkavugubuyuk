#include <stdio.h>
#include <string.h>

int main()
{
   char answer[5];  //answer of the question
    
    printf("Do you have a cat or a dog? ");//question
    scanf("%5s", answer);  //new answer

    if(strcmp(answer, "cat") == 0)//comparing
    {
        printf("meow");
        
    }else if(strcmp(answer, "dog") == 0)//comparing
    {
        printf("hav");
        
    }

    return 0;
}

