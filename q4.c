#include<stdio.h>

int main()
{
    int row, col, rowindex, colindex, rowsum = 0, colsum = 0;
	int i,j;

    printf("\nEnter the array's row size :");
    scanf("%d", &row);

    printf("Enter the array's Column size :");
    scanf("%d", &col);

    int arr[row][col];
    printf("\nEnter Elements of array's :\n ");

    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("\narr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter row Number :", row - 1);
    scanf("%d", &rowindex);
    printf("Elements of row %d : ", rowindex);
    for ( j = 0; j < col; j++)
    {
        printf("%d ", arr[rowindex][j]);
        rowsum += arr[rowindex][j];
    }

    printf("\nTheSum of row %d : %d\n", rowindex, rowsum);

    printf("\nEnter Column Number : ", col - 1);
    scanf("%d", &colindex);
    printf("Element of column %d:", colindex);

    for ( i = 0; i < row; i++)
    {
        printf("%d ", arr[i][colindex]);
        colsum += arr[i][colindex];
    }

    printf("\nSum of column %d : %d\n", colindex, colsum);

    return 0;
}
