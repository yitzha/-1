#include <stdio.h>
double power (double n, int p)
{
    double ans;
    if (p==0) return 1;
    else ans = power(n, p/2);

    if (p%2==0) return ans*ans;
    else return n*ans*ans;
}
int main(void)
{
    double n;
    int p;
    scanf("%lf%d",&n, &p);
    printf("%f\n",power(n,p));
    return 0;
}
