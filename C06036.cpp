#include <stdio.h>
#include <string.h>

int main ()
{
    char s[100001];
    gets (s);
    printf ("%d", strlen(s) - 1);
    return 0;
}

