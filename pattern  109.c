#include<stdio.h>
int main()
{
    int i,j,N;

    printf("enter size of N:");
    scanf("%d",&N);

    printf("square pattern of size %d is\n",N);

    for ( i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
