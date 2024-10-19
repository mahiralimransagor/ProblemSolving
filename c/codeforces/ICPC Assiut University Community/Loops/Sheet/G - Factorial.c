#include<stdio.h>
int main()
{
    long long int t,n,i,fact=1,j;
    scanf("%lld",&t);
    
    for(i=0; i<t; i++)
    {
        fact = 1;
        scanf("%lld",&n);
        
        for(j=1; j<=n; j++)
        {
            fact *= j;
        }
        printf("%lld\n",fact);
    }
    
    return 0;
}
