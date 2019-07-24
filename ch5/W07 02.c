//W07 02
/*
输入一个正整数
必须列出除了1和哥正整数外全部的因数
且从小到大排
若无法因数分解要显示是直数
*/
#include <stdio.h>


int main (void)
{
    int num, div;
    int isPrime;

    printf("Please enter an integer (q to quit):\n");

    while(scanf("%d", &num)== 1){
        isPrime = 1;
        for (div=2; div*div<= num; div++){
            if (num%div == 0){
                printf("%d, %d, ",div, num/div);
                isPrime = 0;
            }

        }
    }
        if (isPrime){
            printf("%d is a prime number.\n", num);
        }
}
/*
    if (isPrime)
        printf("%d is prime.\n", num);
    else
        printf("\h\h are divisors of %d\n", num);
    return 0;
}
*/
