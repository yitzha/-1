#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a,&b, &c, &d);
    if (b-a == d-c && d-c == c-b){
        printf("ha!%d %d", d+ d-c, d-c);
    }else{
          printf("oh~%d %d", d* d/c,d/c);}

    return 0;
}
