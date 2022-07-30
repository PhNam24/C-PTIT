#include <stdio.h>
#include <string.h>

int main ()
{
    char s[1000];
    scanf ("%s", s);
    int check[5];
    for (int i = 0 ; i < 5 ; i++) check[i] = 0;
    // (0) [1] {2} '3' "4"
    for (int i = 0 ; i < strlen(s) ; i++)
    {
        if (s[i] == '(') check[0]++;
        if (s[i] == ')') check[0]--;
        if (s[i] == '[') check[1]++;
        if (s[i] == ']') check[1]--;
        if (s[i] == '{') check[2]++;
        if (s[i] == '}') check[2]--;
        if ((int)s[i] == 27) check[3]++;
        if (s[i] == '"') check[4]++;
    }
    int c = 0;
    for (int i = 0 ; i < 3 ; i++) 
    {
        if ( check[i] == 0 ) c++;
    }
    if (check[3] % 2 == 0 && check[4] % 2 == 0 && c == 3) printf ("1");
    else printf ("0");
    return 0;
}
