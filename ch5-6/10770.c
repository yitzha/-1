#include <stdio.h>
#include <string.h>
int main(void)
{
    char A[5];
    char B[10];
    int i, j, n;
    int found, count, maxcount;

    scanf("%s", A);
    scanf("%d", &n);
    maxcount=0;

    while (n>0){
    scanf("%s",B);
    count=0;//初始一定要放回圈裡
    for (i=0; i+strlen(A)<=strlen(B); i++)
    {
        found=1;
        for (j=0; j<strlen(A); j++)
        {
            if (A[j]!=B[j+i])
                found=0;

        }

    if (found) count++;
    }
    if(maxcount< count) maxcount=count;
    n--;
    }

    printf("%d", maxcount);
    return 0;
}
