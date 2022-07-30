#include <stdio.h>
#include <string.h>
#define test int t; scanf ("%d", &t); while(t--)

int main ()
{
    test
    {
        scanf("\n");
        char s[250];
        gets (s);
        int dem = 0;
        char *p;
        p=strtok (s," ");
        while(p != NULL ) 
        {
            p = strtok(NULL, " ");
            dem++;
        }	
        printf ("%d\n", dem);
    }
    return 0;
}