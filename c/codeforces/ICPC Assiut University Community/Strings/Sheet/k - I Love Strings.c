#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d",&n);

    while (n--)
    {
        char s[51], t[51], result[102];
        scanf("%s %s",s,t);

        int i = 0, j = 0, k = 0;

        while (s[i] != '\0' && t[j] != '\0')
        {
            result[k] = s[i];
            k++;
            i++;
            result[k] = t[j];
            k++;
            j++;
        }

        while (s[i] != '\0')
        {
            result[k] = s[i];
            k++;
            i++;
        }
        while (t[j] != '\0')
        {
            result[k] = t[j];
            k++;
            j++;
        }

        result[k] = '\0';

        printf("%s\n", result);
    }

    return 0;
}
