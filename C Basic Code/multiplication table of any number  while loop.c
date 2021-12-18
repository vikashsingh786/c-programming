#include<stdio.h>
//Write a C program to print all the natural numbers in reverse order:
int natural_numb(int a)
{
    int i=a;
    while(i<=a)
   {
      printf("%d,",i);
      i--;
      if(i == 0)
      {   //terminate the loop at 0;
                break;
      }
   }
}
int main()
{
    int a;
    printf("enter the user input_");
    scanf("%d",&a);
    natural_numb(a);
}
