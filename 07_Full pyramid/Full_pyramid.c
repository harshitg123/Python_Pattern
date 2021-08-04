#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,rows,itr;

    printf("Enter Rows: ");
    scanf("%d", &rows);

    itr = rows-1;
    
    for(i=0; i<rows; i++){
        for(j=0; j<itr; j++){
            printf("  ");
        }
        for(k=0; k<i+1; k++){
            printf(" *  ");
        }
        itr = itr-1;
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:

               *  
             *   *
           *   *   *
         *   *   *   *
       *   *   *   *   *
     *   *   *   *   *   *
   *   *   *   *   *   *   *
 *   *   *   *   *   *   *   *

*/