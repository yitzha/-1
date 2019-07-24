#include <stdio.h>
#include <stdlib.h>
//定义一function 验证下列expression输出对应T or F

int check (int v)
{
    if(v){
            printf("true\n");
    }
    else{
            printf("false\n");
    }

   return v;
}
int main(void)
{
    int x=5,y=3;
    check (x>2 && y == 3);
    check(!(x<2||y==3));

    return 0;
}
