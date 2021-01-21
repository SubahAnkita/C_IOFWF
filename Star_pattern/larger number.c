/*8.	Write a C program to find the largest of three numbers.
Test Data: 12 25 52
Expected Output:
1st Number = 12, 2nd Number = 25, 3rd Number = 52
The 3rd Number is the greatest among three*/
#include <stdio.h>
void main ()
{
    int a, b, c ;
    printf("enter a number :\n");
    scanf("%d",&a);
    printf("enter a number :\n");
    scanf("%d",&b);
    printf("enter a number :\n");
    scanf("%d",&c);
    if(a>b & a>c){
        printf("1st number = a, 2nd number= b , 3rd number =c \n The 1st number is the greatest among three :\n");
    } else if(b>c & b>a){
    printf("1st number = a, 2nd number= b , 3rd number =c \n The 2nd number is the greatest among three :\n");
    }else {
    printf("1st number = a, 2nd number= b , 3rd number =c \n The 3rd  number is the greatest among three :\n");
    }return 0;
}


