#include<stdio.h>
int main()
{
    unsigned long int i,a,z,n,rem;
    int count=0,luck=0;
    scanf("%lu %lu",&a,&z);

    for(i=a; i<=z; i++)
    {
        luck=0;
        n=i;
        while(n)
        {
            rem = n%10;
            if(rem != 4 && rem != 7)
            {
                luck++;
            }
            n = n/10;
        }
        if(luck == 0)
        {
            printf("%lu ",i);
            count++;
        }
    }

    if(count==0)
    {
        printf("-1");
    }

    return 0;
}
