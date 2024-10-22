#include<stdio.h>
int main()
{
    long long int i,n;
    int count=0;
    scanf("%lld",&n);

    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }

    if(count != 0 || n == 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
