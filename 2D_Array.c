#include<stdio.h>

void display(int (*)[]);
int main()
{
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    display(arr);
    return 0;
}

void display(int p[][3])
{
    printf("The array is:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d]", p[i][j]);
            // printf("\n");
        }
    }
}