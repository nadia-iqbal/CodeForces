// 196776690	Mar/10/2023 17:00UTC+6	Nadia-Iqbal	71A - Way Too Long Words	GNU C11	Accepted	15 ms	0 KB
#include<stdio.h>
#include<string.h>
int main(){
    int i, n, x, t;
    char c[101];
    scanf("%d\n",&t);
    while (t--)
    {
        scanf("%s", &c);
        int l = strlen(c);
        if (l>10)
        {
            printf("%c%d%c\n", c[0], l-2, c[l-1]);
        }
        else printf("%s\n", c);
    }
    return 0;
    }
    
