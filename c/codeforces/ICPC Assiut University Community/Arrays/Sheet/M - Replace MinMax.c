#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int i,arr[t],max,maxid,min,minid;

    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=0; i<t; i++)
    {
        if(max <= arr[i])
        {
           max = arr[i];
           maxid = i;
        }
        if(min >= arr[i])
        {
            min = arr[i];
            minid = i;
        }
    }

    long long int temp = max;
    arr[maxid] = arr[minid];
    arr[minid] = temp;

    for(i=0; i<t; i++)
    {
        printf("%lld ",arr[i]);
    }

    return 0;
}
