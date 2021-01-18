#include<stdio.h>
int main()
{
int r, x , y;
printf("number of rows: ");
scanf("%d",&r);
for(x=r;x>=1;x--)
{
for(y=1;y<=x;y++)
{
printf("*");
}
printf("\n");
}
for(x=2;x<=r; x++)
{
    for(y=0;y<x;y++)
{
printf("*");
}
printf("\n");
}
return 0;
}

