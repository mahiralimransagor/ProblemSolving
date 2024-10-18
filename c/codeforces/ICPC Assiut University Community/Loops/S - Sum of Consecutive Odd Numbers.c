#include<stdio.h>
int main()
{
    int t,i,x,y,temp,sum,j;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        sum = 0;
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        for(j = x+1; j<y; j++)
        {
            if(j%2 != 0)
            {
                sum = sum + j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
