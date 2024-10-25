#include <stdio.h>

int main()
{
    int age;//users age
    int i;//counter
    printf("Please enter your age : ");
    scanf("%d",&age);
    
    for(i=1; i <=age; i++)
    {
        printf("Happy Birth Day \n");
    }
    return 0;
}
