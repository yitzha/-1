#include <stdio.h>
int f(int x);

int main(void)
{
    printf("= %d\n", f(10));
    return 0;
}
int f(int x)
{
    int ans;
    if (x == 1){
        printf("1");
        return x;}
    if (x%2 == 1)
        printf("(");

    ans = f(x-1);

    if (x%2 == 0){
        printf("+%d", x);
        ans= ans+ x;
    }else{
        printf(")*%d", x);
        ans= ans*x;
    }

    return ans;
}
