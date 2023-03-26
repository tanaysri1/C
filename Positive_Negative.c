#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number which is to be checked:\t");
    scanf("%d",&num);
    if(num>0)
        printf("The number is positive");
    else if(num<0)
        printf("The number is negative");
        else
        printf("The number is zero");


    return 0;

}