#include <stdio.h>

void main(){


    int n;
    printf("Input Line No: ");
    scanf("%d",&n);

    printf("Right Angle Triangle\n");
    for(int i=0; i<n; i++){

        for(int j=0; j<=i; j++){
            printf("*");
        }

        if(i<n-1) printf("\n");
    }

    printf("\n\nSquare\n");


     for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            printf("*");
        }

        if(i<n-1) printf("\n");
    }


}
