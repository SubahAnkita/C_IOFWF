#include<stdio.h>
void main()
{


    int n;
    printf("enter line number:\n");
    scanf("%d", &n);
    printf("orthogonal triangle :\n");
    for( int i=n ; i>0 ; i--){
            for(int j=0 ; j<i ;j++){
            printf("*");
    }
if(i>1) printf("\n");
}return 0;
}

