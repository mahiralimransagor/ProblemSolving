#include<stdio.h>
int main(void)
{
    long long int i,j,t,count=0;
    scanf("%lld",&t);
    long long int arr[t];

    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0, j=t-1; i<t, j>=0; i++, j--)
    {
        if(arr[i] == arr[j])
        {
            count++;
        }
    }

    if(count == t)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
