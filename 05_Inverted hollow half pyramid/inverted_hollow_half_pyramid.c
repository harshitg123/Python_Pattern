#include<stdio.h>

int main(int argc, char const *argv[])
{
    int rows;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for(int i=rows; i>0; i--){
        for(int j=0; j<i; j++){
            if(i==rows || i==1 || j==0 || j==(i-1)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT

* * * * * * 
*       *
*     *
*   *
* *
*

*/