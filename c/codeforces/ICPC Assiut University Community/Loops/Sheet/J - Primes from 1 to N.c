#include<stdio.h>
int main()
{
    long long int i,n,j,m;
    int count=0;
    scanf("%lld",&n);

    if(n==1 || n==2)
    {
        if(n==1)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    else
    {
        for(i=2; i<=n; i++)
        {
            m = i;
            count=0;

            for(j=2; j<m; j++)
            {
                if(m%j == 0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                printf("%lld ",i);
            }
        }
    }

    return 0;
}
