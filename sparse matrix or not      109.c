#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols;
    int i, j;
    int zero_count = 0;
    int nonzero_count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 0)
            {
                zero_count++;
            }
            else
            {
                nonzero_count++;
            }
        }
    }

    printf("\nThe Matrix is:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    if (zero_count > nonzero_count)
    {
        printf("\nThe matrix is a sparse matrix.\n");
    }
    else
    {
        printf("\nThe matrix is not a sparse matrix.\n");
    }

    return 0;
}
