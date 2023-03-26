#include<stdio.h>
int main(){
    int num;
    printf("Enter the number which is to be checked:\t");
    scanf("%d",&num);
    if(num%2==0)
    printf("It is an Even number");
    else
    printf("It is an Odd number");
    if(num<=0)
    printf("The number is in negative, please re-enter in correct format.");
    
    return 0;

}