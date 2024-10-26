#include<stdio.h>
int main()
{
    long long int a,b,s1,s2;
    scanf("%lld %lld",&a,&b);

    s1 = a%10;
    s2 = b%10;

    printf("%lld\n",s1+s2);

    return 0;
}
