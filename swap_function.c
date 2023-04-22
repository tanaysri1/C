#include<stdio.h>
void swap(int, int);

void swap(int n1, int n2)  //local variables
{
        //Swapping logic
    int s;              
    s=n1;
    n1=n2;
    n2=s;
    printf("The swapped numbers are %d %d", n1, n2);
    
}
int main()
{
    int num1,num2,res;
    printf("Enter the two numbers to swap:\n");
    scanf("%d %d", &num1, &num2);
    swap(num1,num2);
    return 0;
}