#include <stdio.h>
int main()
{
    int num, d1, d2, d3, total;
    printf("Enter the number whose digits are to be added together:\t");
    scanf("%d", &num);     // 154
    d1 = num % 10;         // 4
    d2 = (num % 100) / 10; // 5
    d3 = num / 100;        // 1
    total = d1 + d2 + d3;
    printf("The total of the entered number is:%d", total);

    return 0;
}