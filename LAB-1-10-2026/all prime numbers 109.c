#include<stdio.h>
int main()
{
    int n,i,j,count;

    printf("enter the value of n:");
    scanf("%d",&n);

    printf("prime numbers between 1 and %d are:\n",n);

    for(i=2;i<=n;i++)
    {
        count=0;

        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
