#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main (void)
{
    char ch;
    while ((ch = getchar()) != '\n'){
            if (islower(ch)){
                ch= toupper(ch);
            }
            else if (isupper(ch)){
                ch= tolower(ch);
            }
            putchar(ch);
    }
}