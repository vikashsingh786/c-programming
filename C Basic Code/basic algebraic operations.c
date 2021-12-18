#include<stdio.h>
//C PROGRAM TO COMPUTE QUOTIENT AND REMAINDER:
int compute(int dividend,int divisor)
{
    int quotient,remainder;
    quotient=dividend/divisor;
    remainder=dividend%divisor;

    return quotient,remainder;

}
int main()
{
    int d,divis;
    printf("enter the dividend and divisor _");
    scanf("%d%d",&d,&divis);
    int return_value=compute(d,divis);
    printf("%d%d",return_value);


}
