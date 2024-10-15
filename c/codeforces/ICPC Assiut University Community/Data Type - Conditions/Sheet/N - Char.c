#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    int c = ch;

    if(c>90)
    {
        printf("%c\n",c-32);
    }
    else
    {
        printf("%c\n",c+32);
    }

    return 0;
}
