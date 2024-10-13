#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long int arr[t];

    for(int i=0; i<t; i++)
    {
        scanf("%ld",&arr[i]);
        if(arr[i] == 0)
        {
            printf("0 ");
        }
        else if(arr[i] > 0)
        {
            printf("1 ");
        }
        else
        {
            printf("2 ");
        }
    }

    return 0;
}
