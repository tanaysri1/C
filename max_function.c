#include<stdio.h>


int max(int num1, int num2)
{
    if(num1>num2)
    return num1;
    else
    return num2;

}
int main()
{
    int n1,n2,res;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &n1,&n2);
    res=max(n1, n2);
    printf("The max of %d and %d is %d",n1,n2,res);
    return 0;
}