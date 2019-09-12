#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int M, N, x;
    int i, maxval, minval;
    int maxi, maxj, mini, minj;
    scanf("%d%d", &M, &N);

    scanf("%d", &x);
    maxval = minval = x;
    maxi = maxj = 0;
    mini = minj = 0;

    for(i=1; i<N*M; i++)
    {
        scanf("%d", &x);
        if (x>maxval)
        {
            maxval = x;
            maxi = i/N;
            maxj = i%N;
        }
        else if (x<minval)
        {
            minval = x;
            mini = i/N;
            minj = i%N;
        }else{}
    }
    printf("%d %d", abs(maxi-mini)+abs(maxj-minj),maxval-minval);
}
