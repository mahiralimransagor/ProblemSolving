#include<stdio.h>
int main()
{
    long long int t,i;
    scanf("%lld",&t);
    long long int arr[t+10];

    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=t-1; i>=0; i--)
    {
        printf("%lld ",arr[i]);
    }

    return 0;
}
