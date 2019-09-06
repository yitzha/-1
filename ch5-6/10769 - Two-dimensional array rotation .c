#include <stdio.h>
int main(void)
{
    int i, j;
    int N;
    int A[20][20]={};
    scanf("%d", &N);
    for (i=0; i<N; i++){
        for( j=0; j<N; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (i=0; i<N; i++){
            printf("%d", A[i][0]);
        for (j=1; j<=i; j++){
            printf(" %d", A[i-j][j]);
        }
        printf("\n");
    }
    for (i=N-2; i>=0; i--){
        printf("%d", A[N-1][N-1-i]);
        for (j=1; j<=i; j++){
            printf(" %d", A[N-1-j][N-1-(i-j)]);
        }
        printf("\n");
    }
    return 0;
}
