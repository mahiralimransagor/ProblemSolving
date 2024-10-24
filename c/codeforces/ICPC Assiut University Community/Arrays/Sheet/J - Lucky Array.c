#include<stdio.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    long long int i,arr[t],min;

    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }

    min = arr[0];

    for(i=0; i<t; i++)
    {
        if(min >= arr[i])
        {
            min = arr[i];
        }
    }

    for(i=0; i<t; i++)
    {
        if(arr[i] == min)
        {
            count++;
        }
    }

    if(count%2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}
