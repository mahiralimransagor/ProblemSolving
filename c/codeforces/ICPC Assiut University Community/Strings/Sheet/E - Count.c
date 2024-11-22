#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    int sum=0;

    scanf("%s",s);

    for(int i=0; s[i] != '\0'; i++)
    {
    	int strint = s[i];

    	sum += (strint-48);
    }

    printf("%d\n",sum);

    return 0;
}
