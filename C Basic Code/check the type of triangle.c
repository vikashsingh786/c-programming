#include<stdio.h>
//c program to take class number from the user and show number of students:
int students(int clas )
{


    if(clas == 1){
        printf("no of students is 40");
    }
    else if(clas == 2){
        printf("no of students is 30");
    }
    else if(clas == 3){
        printf("no of student is 20");
    }else{
        printf("no of student is 10");
    }
}


int main()
{
    int clas;
    printf("enter the class number_");
    scanf("%d",&clas);
    students(clas);

}
