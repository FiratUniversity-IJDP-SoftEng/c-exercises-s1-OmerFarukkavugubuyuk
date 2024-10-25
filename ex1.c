#include <stdio.h>

int main()
{
    int sayi;

    printf("Guess a number between 1 and 5 : ");
    scanf("%d", &sayi);

    if (sayi == 3)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf(sayi);
    return 0;
}
