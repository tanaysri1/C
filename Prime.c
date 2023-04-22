#include <stdio.h>
int main()
{

    int num, loop, count = 1;
    printf("Enter the number which is to be checked:\n");
    scanf("%d", &num);
    for (loop = 2; loop < num; loop++)
    {
        if (num % loop == 0)
        {
            count = 0;
        }
    }
    if (count == 1)
    {
        printf("The given number is a prime number");
    }
    else
        printf("The given number is not a prime number");

    return 0;
}