#include<stdio.h>

int main(int argc, char const *argv[])
{
    int rows;

    printf("Enter Rows: ");
    scanf("%d", &rows);

    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:

*
* *
* * *
* * * *
* * * * *
*/