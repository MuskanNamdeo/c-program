//Write a C program to find cube of any number using function.
#include <stdio.h>
int cube(int a)
{
    return printf("The cube is %d", a * a * a);
}
int main()
{
    int b;
    printf("Enter the Number:");
    scanf("%d", &b);
    cube(b);
    return 0;
}