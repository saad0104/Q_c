#include <stdio.h>
#include <string.h>
char *reverseword(char *s)
{
    fgets(s, 100, stdin);
    int i = 0;
    int j = strlen(s) - 1;
    while (i <= j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}
int main()
{
    char S[100];
    printf("Enter a string: ");
    printf("Reversed String: %s", reverseword(S));
    return 0;
}
