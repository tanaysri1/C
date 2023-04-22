#include<stdio.h>
int main()
{
    int num1, num2, swap;
    printf("\nEnter the numbers to swap:");
    scanf("%d %d", &num1, &num2 );
    swap=num1;
    num1=num2;
    num2=swap;
    printf("The swapped numbers are %d %d", num1, num2);
    return 0;
}