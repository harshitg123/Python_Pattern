#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,itr,rows;

    printf("Enter rows: ");
    scanf("%d", &rows);

    itr = rows-1;

    for(i=0; i<rows; i++){
        for(j=0; j<itr; j++){
            printf("  ");
        }
        for(k=0; k<i; k++){
            if(i==0 || i==(rows-1) || k==0 || k==(i-1)){
                printf(" *  ");
            }else{
                printf("    ");
            }
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
             *       *
           *           *
         *               *
       *                   *
     *                       *
   *                           *
 *   *   *   *   *   *   *   *   *

*/