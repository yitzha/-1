//W07 01练习
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
    while ((ch = getchar()) != '\n'){
            if (ch>='a' &&ch<='z'){
                putchar(ch-'a'+'A');//对应到大写的字
                }
            else {
                putchar(ch);
            }
//有现成的function可以用putchar(toupper(ch));
//在ctype.h里 isalpha是不是英文字 isdigt 是不是数字toupper tolower小写变大写是不是小/大写 islower isupper

    }
    putchar(ch);
}


