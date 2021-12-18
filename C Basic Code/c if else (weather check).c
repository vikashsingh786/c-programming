#include<stdio.h>
//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene :
int triangle(int a,int b,int c)
// where a,b and c are sides of a  triangles:
{
    if(a == b && b == c)
    {
        printf("triangle is equilateral ");
    }
    else
    {
        if(a==b || b==c || a==c)
        {
            printf("triangle is isosceles");
        }
        else
        {
            printf("triangle is scalene");
        }
    }
}
int main()
{
    int a,b,c;
    printf("enter the value of a _");
    scanf("%d",&a);
    printf("enter the value of b _");
    scanf("%d",&b);
    printf("enter the value of c _");
    scanf("%d",&c);
    triangle(a,b,c);
}
