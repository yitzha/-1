//10769 - Two-dimensional array rotation
#include <stdio.h>
int main (void)
{
    int i, M, j;
    scanf("%d", &M);
    int A[20][20]={};
    for(i=0;i<M;i++){
        for(j=0;j<M;j++){
            scanf("%d", &A[i][j]);
        }
    }

    for (i=0;i<M;i++){
            printf("%d", A[i][0]);
        for (j=1;j<=i;j++){
            printf("%d",A[i-j][j]);
        }printf("\n");
    }
    for (i=M-1;i>0;i--){
            printf("%d", A[M-1][M-1-i]);
        for (j=1;j<=i;j++){
            printf("%d",A[i-j][j]);
        }printf("\n");
    }

}


/*

#include <stdio.h>
//middle test 10768 - wave
void wave(char ch, int a)
{
    int i, j;
    for (i=0; i<a-1; i++)
            {
                for (j=0; j<=i; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");
            }
            for (i=a-1; i>0; i--)
            {
                for (j=0; j<=i; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");
            }
}
int main (void)
{
    char ch;
    int a, b, i, j;
    scanf("%c%d%d", &ch, &a, &b);
    if (a == 1)
    {
        for(i=0; i<b-1; i++) printf("%c\n", ch);
        printf("%c", ch);
    }
    else
    {
        for(i=0;i<b;i++){
            wave (ch, a);
        }
        if (a>0 && b>0) printf("%c", ch);
    }
}
/*
int main (void)
{
    char ch;
    int a, b, i, j;
    scanf("%c%d%d", &ch, &a, &b);
    if (a == 1)
    {
        for(i=0; i<b-1; i++) printf("%c\n", ch);
        printf("%c", ch);
    }
    else
    {
        while (b>0)
        {
            for (i=0; i<a-1; i++)
            {
                for (j=0; j<=i; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");
            }
            for (i=a-1; i>0; i--)
            {
                for (j=0; j<=i; j++)
                {
                    printf("%c", ch);
                }
                printf("\n");
            }
            b--;
        }if (a>0 && b>0) printf("%c", ch);
    }
}
*/
