#include<stdio.h>
int main()
{
    int n,orignal,remainder,reverse=0;

    printf("enter a number:");
    scanf("%d",&n);

    orignal=n;

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(reverse==orignal)
        printf("%d is a palindrome number.",orignal);
    else
        printf("%d is not a palindrome number.",orignal);
     return 0;
}
