#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    long long int arr[t];
    long long int sum=0;

    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
        sum = sum + arr[i];
    }

    if(sum>0)
    {
        printf("%lld\n",sum);
    }
    else
    {
        printf("%lld\n",(sum*-1));
    }
    return 0;
}
