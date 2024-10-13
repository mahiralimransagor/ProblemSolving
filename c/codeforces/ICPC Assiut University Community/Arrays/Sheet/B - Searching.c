#include<stdio.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    unsigned long int arr[t];
    unsigned long int result;

    for(int i=0; i<t; i++)
    {
        scanf("%lu",&arr[i]);
    }

    scanf("%lu",&result);

    for(int i=0; i<t; i++)
    {
        if(arr[i] == result)
        {
            printf("%d\n",i);
            count++;
            break;
        }
    }

    if(count==0)
    {
        printf("-1\n");
    }
    return 0;
}
