# include<stdio.h>

int main(int argc, char const *argv[])
{
    int row, column;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
