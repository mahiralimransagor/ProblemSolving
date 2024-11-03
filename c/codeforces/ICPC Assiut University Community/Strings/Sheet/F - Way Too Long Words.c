#include<stdio.h>
#include<string.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    
    char st[100];
    
    for(int i=0; i<n; i++)
    {
        scanf("%s",&st);
        
        int len = strlen(st);
        
        if(len > 10)
        {
            printf("%c%d%c\n",st[0],len-2,st[len-1]);
        }
        else
        {
            printf("%s\n",st);
        }
    }
}
