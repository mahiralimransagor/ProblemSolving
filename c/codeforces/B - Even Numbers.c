#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("-1\n");
    }
    return 0;
}
