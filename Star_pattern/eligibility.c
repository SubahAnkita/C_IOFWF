#include <stdio.h>
void main ()
{
    int n;
    printf("enter the age :\n");
    scanf("%d",&n);

    if(n>=18){
        printf("congratulation you are eligible: \n");
    }else{
    printf("you are  not eligible:\n");
    }return 0;
}
