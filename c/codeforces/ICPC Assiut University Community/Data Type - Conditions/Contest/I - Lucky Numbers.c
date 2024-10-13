#include<stdio.h>
int main()
{
    int n,remain,m;
    scanf("%d",&n);

    for(int i=0; i<=1; i++)
    {
        remain = n/10;
        m = n%10;
        if(m%remain == 0 || remain%m == 0)
        {
           printf("YES\n");
           break;
        }
        else
        {
            printf("NO\n");
            break;
        }
    }

    return 0;
}

