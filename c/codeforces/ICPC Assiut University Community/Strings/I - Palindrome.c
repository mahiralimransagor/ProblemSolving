#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",str);

    int count=0;

    for(int i=0, j=strlen(str)-1; str[i] != '\0'; i++, j--)
    {
        if(str[i] != str[j])
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
