#include<stdio.h>
#include<string.h>
int main()
{
    char str1[11],str2[11];
    scanf("%s",str1);
    scanf("%s",str2);

    int lenof1 = strlen(str1);
    int lenof2 = strlen(str2);

    printf("%d %d\n",lenof1,lenof2);
    printf("%s%s\n",str1,str2);

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    printf("%s %s\n",str1,str2);

    return 0;
}
