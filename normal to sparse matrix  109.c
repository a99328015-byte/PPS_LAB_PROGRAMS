
#include <stdio.h>

int main()
{
    int matrix[10][10], sparse[100][3];
    int rows, cols;
    int i, j, k = 0;
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

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (matrix[i][j] != 0)
                {
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = matrix[i][j];
                    k++;
                }
            }
        }

        printf("\nSparse Matrix:\n");
        printf("Row\tColumn\tValue\n");

        for (i = 0; i < k; i++)
        {
            printf("%d\t%d\t%d\n",
                   sparse[i][0],
                   sparse[i][1],
                   sparse[i][2]);
        }
    }
    else
    {
        printf("\nThe matrix is not a sparse matrix.\n");
    }

    return 0;
}
