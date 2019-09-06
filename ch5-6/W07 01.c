//W07 01
/*
使用者输入一串字元(读到'\n'结束)
把这串字元李全部的英文字母转成大写再输出
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
    char ch;
    //读到几个ex:读到两个整数2 一个- 没有0
    while ((ch = getchar()) != '\n'){
            if (! isalpha(ch)){
                putchar(ch);
                }
            else {
                putchar(ch+1);
            }

    }
    putchar(ch);
}


