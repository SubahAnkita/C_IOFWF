#include <stdio.h>
void main()
{
    int i,j ,r;
    printf("enter the line number:\n");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }
}

