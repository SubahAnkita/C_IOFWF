#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter line number: ");
    scanf("%d", &n);

    for (i=n; i>=1; i--)
    {
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
        printf("\n");
    }
    for (i=2; i<=n; i++)
    {
        {
            printf("*");
        }
        for(j=2; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
