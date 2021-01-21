#include <stdio.h>
void main ()
{
    int n;
    printf("enter the year :\n");
    scanf("%d",&n);
     if(n%4==0){
        printf("n is a leap year :\n");
     }else {
     printf("n is not a leap year");
     }return 0;
}
