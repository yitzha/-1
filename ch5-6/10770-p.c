#include <stdio.h>
/*int A[100][100]={};
int main (void)
{
    int M, N;
    int i, j, x;
    scanf("%d%d", &M, &N);

    for(i=0;i < M*N;i++){
        scanf("%d", &x);
        if (x != 0)
        {printf("%d %d %d\n", i/M, i%N, x);}
        }
        */

int main(void)
{
	int m, n, i, x;
	scanf("%d%d", &m, &n);
	for (i=0; i<m*n; i++) {
		scanf("%d", &x);
		if (x!=0) {
			printf("%d %d %d\n", i/n, i%n, x);
		}
	}
	return 0;
}

