#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long int arr[t];
    long int min,index=0;

    for(int i=0; i<t; i++)
    {
        scanf("%ld",&arr[i]);
    }

    min = arr[0];

    for(int i=0; i<t; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }

    printf("%ld %ld\n",min,index+1);

    return 0;
}
