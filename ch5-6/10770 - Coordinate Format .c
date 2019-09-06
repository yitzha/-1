#include <stdio.h>
#include <string.h>

int main (void)
{
    char A[5], B[10];
    int i, k, j, N;
    int equal, count, maxcount;

    scanf("%s", A);
    scanf("%d", &N);
    maxcount = 0;
    for(j=0; j<N; j++)
    {
        scanf("%s", B);
        count=0;
        for (i=0; i+strlen(A)<=strlen(B); i++)
        {
            equal= 1;
            for (k=0; k<strlen(A); k++)
            {
                if (A[k] != B[i+k])
                {
                    equal = 0;
                    break;
                }
            }
            if (equal)
                count++;

        }
        if (count > maxcount) maxcount= count;
    }
    printf("%d\n", maxcount);
    return 0;
}
