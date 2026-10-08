#include<stdio.h>
int main()
{
    int n,orignal,remainder,sum=0;

    printf("enter a number:");
    scanf("%d",&n);

    orignal=n;

    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder*remainder*remainder;
        n=n/10;
    }
    if(sum==orignal)
        printf("%d is an Armstrong number.",orignal);
    else
        printf("%d is not an Armstrong number.",orignal);

    return 0;
}
