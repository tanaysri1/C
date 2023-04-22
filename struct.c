#include<stdio.h>
#include<string.h>

struct details{
    int i;
    char a[10];
    float f;

};

int main()
{   
    struct details s={10,"HelloWorld",10.50f};
    printf("\n The elements are %d, %s and %f", s.i, s.a, s.f);
    return 0;
}