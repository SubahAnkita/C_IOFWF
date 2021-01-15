#include <stdio.h>
#include <stdlib.h>

//int a;// global variable


int main(){

    while(1){

    int highScore, newInputValue; //local variable declaration.

    FILE *fptr;
    fptr = fopen("ankitaa.txt", "r");

    if ( fptr == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%d", &highScore);

    printf("Value from Database= %d\n",highScore);

    fclose(fptr);

    int base ,power ;
    printf("Put base value: ");
    scanf("%d",&base);

    printf("Put power value: ");
    scanf(" %d",&power);

    int i=0 , n=1;

/*   for(i=0; i < power; i++){
            n=n*base;
    }
*/

    while(i<power){
        n *= base;
        i++;
    }

    newInputValue = n;

    printf("New sum = %d\n",newInputValue);

    if(newInputValue > highScore){
        printf("WoW!! You got a new high score!!\n");

        fptr = fopen("ankitaa.txt", "w");

            if ( fptr == NULL) {
                printf("Error! opening file");
                exit(1);
            }

            fprintf(fptr,"%d",newInputValue);
            fclose(fptr);
        }
    else{

        printf("Oops!! Try again for a new high score\n");
    }


    printf("Do you want to try again? [ y ]\n");

    char decider;
    printf("Give small y to continue or any key to close: ");

    scanf(" %c",&decider);

    if (decider == 'y'){
        continue;
    }
    else {
        break;
    }

}

   //printf("%x",&highScore); // physical location of a in the RAM

   return 0;

}
