#include <stdio.h>
void triangle(char ch, int m)
{
    int i, j;
    for (i=0; i<m; i++){
        for (j=0; j<=i; j++){
                printf("%c", ch);
        }
        printf("\n");
    }
    for (i=m; i>2; i--){
        for (j=1;j<i; j++){
            printf("%c", ch);
        }printf("\n");
    }
}

int main (void)
{
    char ch;
    int m, n, i;
    scanf("%c%d%d", &ch, &m, &n);
    if (m==1){
        for (i=1; i<n; i++) printf("%c\n", ch);
    }else{
        for (i=0; i<n; i++){
                triangle(ch, m);
        }
    }
    if (m>0 && n>0)
        printf("%c", ch);
    return 0;
}
