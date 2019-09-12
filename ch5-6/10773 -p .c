#include <stdio.h>
int main (void)
{
    int A, B, k, amount, i;
    char ch;
    scanf("%d%d", &A, &B);
    scanf("%d", &k);
    while(getchar() != '\n');

    while(k>0){
        scanf("%c%d", &ch, &amount);
        while(getchar()!='\n');

		if (ch == 'A') {
			A = A*1.08 - amount;
			B = B*1.08 + amount;
		} else {
			A = A*1.08 + amount;
			B = B*1.08 - amount;
		}
		k--;
        }
        printf("%d %d", A, B);
        return 0;
}

