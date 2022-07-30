#include <stdio.h>
#include <string.h>
#include <math.h>

void xoay ( char x[] )
{
    int l = strlen (x);
    char tmp[l];
    for ( int i = 1 ;  i < l ; i++ )
    {
        tmp[i-1] = x[i];
    }
    tmp[l-1] = x[0];
    tmp[l] = '\0';
    strcpy (x , tmp);
}

int check ( char s[] , char x[] )
{
    for ( int i = 0 ; i < strlen(s) ; i++ )
    {
        xoay(x);
        if ( strcmp(s , x) == 0 ) return 1;
    }
    return 0;
}

// nhan voi so < 10
void nhan1 ( char s[] , int x , char res[] )
{
    int l = strlen(s);
    int nho = 0;
    int tich;
    char tmp[100];
    int d = 0;
    for ( int i = l - 1 ; i >= 0 ; i-- )
    {
        tich = ( s[i] - '0' ) * x + nho;
        tmp[i] = tich % 10 + '0';
        d++;
        nho = tich / 10;
    }
    tmp[d] = '\0';
    if ( nho != 0 ) 
    {
        char tmp1 = nho +'0';
        char tmp2[d+1];
        tmp2[0] = tmp1;
        strcat (tmp2 , tmp);
        strcpy (res , tmp2);
    }
    else strcpy (res , tmp);  
}

// tong 2 so nguyen lon
void sum ( char s1[] , char s2[] , char res[] )
{
    char tmp[1000] = {""};
    int d = 0;
    int l1 = strlen(s1) , l2 = strlen(s2);
    char a[500] = {""};
    char b[500] = {""};
    if ( l1 < l2 )
    {
        for ( int i = 0 ; i < l2 - l1 ; i++ ) a[i] = '0';
        strcat (a,s1);
        strcpy (b,s2);
    }
    else 
    {
        for ( int i = 0 ; i < l1 - l2 ; i++ ) a[i] = '0';
        strcat (a,s2);
        strcpy (b,s1);
    }
    int l = strlen(a);
    int nho = 0;
    int tong;
    for ( int i = l - 1 ; i >= 0 ; i-- )
    {
        tong = a[i] + b[i] - 2 * '0' + nho;
        tmp[i] = tong % 10 + '0';
        d++;
        nho = tong / 10;
    }
    tmp[d] = '\0'; 
    if ( nho != 0 ) 
    {
        char tmp1 = nho +'0';
        char tmp2[d+1];
        tmp2[0] = tmp1;
        strcat (tmp2 , tmp);
        strcpy (res , tmp2);
    }
    else strcpy (res , tmp);  
}


// nhan voi so >= 10;
void nhan2 ( char s[] , int x , char res[] )
{
    int a = x % 10;
    int b = x / 10;
    char donvi[100];
    char chuc[100];
    nhan1 (s , a , donvi);
    nhan1 (s , b ,chuc);
    char tmp[strlen(chuc) + 1];
    strcpy(tmp , chuc);
    tmp[strlen(chuc)] = '0';
    tmp[strlen(chuc) + 1] = '\0';
    char tmp1[1000];
    sum (tmp , donvi , tmp1);
    strcpy(res , tmp1);
}

int main ()
{
    /* int t;
    scanf ("%d", &t);
    while (t--)
    {
        scanf ("\n");
        char s[61];
        scanf ("%s", s);
        char s1[61];
        int d = 0 , d0 = 0;
        for ( int i = 0 ; i < strlen(s) ; i++ )
        {
            if ( s[i] == '0' ) d0++;
            else break;
        }
        for ( int i = d0 ; i < strlen(s) ; i++ )
        {
            s1[d++] = s[i];
        }
        s1[d] = '\0';
        int count = 1;
        for ( int i = 1 ; i < strlen(s) ; i++ )
        {
            char tmp[1000];
            if ( i < 9 ) nhan1 (s1 , i + 1 , tmp);
            else nhan2 (s1 , i + 1 , tmp);
            if ( check(s , tmp) == 1 ) count++;
        }
        if ( count == strlen(s) ) printf ("YES");
        else printf ("NO");
        printf ("\n");
    } */
    scanf ("\n");
    char s[61];
    scanf ("%s", s);
    char s1[61];
    int d = 0 , d0 = 0;
    for ( int i = 0 ; i < strlen(s) ; i++ )
    {
        if ( s[i] == '0' ) d0++;
        else break;
    }
    for ( int i = d0 ; i < strlen(s) ; i++ )
    {
        s1[d++] = s[i];
    }
    s1[d] = '\0'; 
    printf ("%s\n", s1);
    int count = 1;
    for ( int i = 1 ; i < strlen(s) ; i++ )
    {
        char tmp[1000];
        if ( i < 9 ) nhan1 (s1 , i + 1 , tmp);
        else nhan2 (s1 , i + 1 , tmp);
        printf ("%s\n", tmp);
    }
    return 0;
}