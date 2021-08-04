#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,itr,rows;

    printf("Enter Rows: ");
    scanf("%d", &rows);

    itr = rows;

    for(i=0; i<rows; i++){
        for(j=0; j<i; j++){
            printf("  ");
        }
        for(k=0; k<itr; k++){
            printf(" *  ");
        }
        --itr;
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:

 *   *   *   *   *   *   *   *
   *   *   *   *   *   *   *
     *   *   *   *   *   *
       *   *   *   *   *
         *   *   *   *
           *   *   *
             *   *
               *
*/