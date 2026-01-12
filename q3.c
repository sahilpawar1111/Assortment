#include <stdio.h>

int main()
{
    int arraysize;
    int i,j;

    printf("\nEnter the array's row&column size :");
    scanf("%d", &arraysize);

    int arr[arraysize][arraysize];

    printf("\nEnter Elements of array'size : ");
    for ( i = 0; i < arraysize; i++)
    {
        for ( j = 0; j < arraysize; j++)
        {
            printf("\narr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Tranfrom Matrix of array :\n");
    for (i = 0; i < arraysize; i++)
    {
        for ( j = 0; j < arraysize; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
