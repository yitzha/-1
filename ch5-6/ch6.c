#include <stdio.h>


int main (void)
{
    int num, div;
    int isPrime;

    printf("Please enter an integer (q to quit):\n");
    scanf("%d", &num);

    isPrime = 1;
    for (div=2; div*div< num; div++){
        if (num%div == 0){
                printf("%d, ",div);
                isPrime = 0;
            }

        }
    for ( ; div>=2;div--){
        if (num%div == 0){
                printf("%d, ",num/div);

            }
        }
    if (isPrime)
        printf("%d is prime.\n", num);
    else
        printf("\b\b are divisors of %d\n", num);
    return 0;
}

