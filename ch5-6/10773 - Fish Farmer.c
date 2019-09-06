#include <stdio.h>
int main (void)
{
    int A,B;
    int n,i;
    char move;
    int amount;
    freopen("10773.txt","w", stdout);
    scanf("%d%d", &A, &B);
    scanf("%d", &n);

   for (i=0; i<n; i++) {
        while(getchar()!='\n');/*死在這，while放scan前*/
		scanf("%c%d", &move, &amount);
		printf ("%d\n", amount);

		if (move == 'A') {
			A = A*1.08 - amount;
			B = B*1.08 + amount;
		} else {
			A = A*1.08 + amount;
			B = B*1.08 - amount;
		}
	}
    printf("%d %d", A, B);
    return 0;
}

