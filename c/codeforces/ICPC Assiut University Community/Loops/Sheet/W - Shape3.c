#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int row=1; row<=n; row++)
    {
        for(int col=1 ; col<=n-row; col++)
        {
            printf(" ");
        }
        for(int col=1; col<=2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int row=n; row>=1; row--)
    {
        for(int col=n-row ; col>=1; col--)
        {
            printf(" ");
        }
        for(int col=2*row-1; col>=1; col--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}