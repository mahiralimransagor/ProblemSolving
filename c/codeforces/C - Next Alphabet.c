#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    int c = ch;
    if(ch == 122)
    {
        printf("a\n");
    }
    else
    {
        printf("%c\n",c+1);
    }

    return 0;
}
