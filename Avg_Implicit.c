#include<stdio.h>
int main(){
    int mar1,mar2,mar3,total;
    float avg;
    printf("Enter the marks of the 3 subjects:\n");
    scanf("%d%d%d",&mar1,&mar2,&mar3);
    total=mar1+mar2+mar3;
    printf("The total marks are:%d\t",total);
    avg=total/.3f;
    printf("The avg is:%f",avg);
    return 0;
}