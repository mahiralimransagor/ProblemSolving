#include<stdio.h>
int main(void)
{
    int a,b,c,maiorab,major;
    scanf("%d %d %d",&a,&b,&c);

    maiorab = (a+b+ abs(a-b))/2;
    major = (maiorab + c + abs(maiorab-c))/2;

    printf("%d eh o maior\n",major);

}
