#include <stdio.h>
#include<stdlib.h>
void swap(int *, int *);

int main()
{
    int n1;
    int n2;
    printf("Enter the two numbers which are to be swapped: \n");
    scanf("%d%d", &n1, &n2);
    swap(&n1, &n2);
    printf("The value in n1 is %d and n2 is %d", n1, n2);
    return 0;
}

void swap(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int));
    if (c != NULL)
    {
        *c = *a;
        *a = *b;
        *b = *c;
    }
}