/* W07_05 判斷輸入的字串是否對稱 */
#include <stdio.h>
#include <string.h>

int main()
{
   char str[1000];
   int i, j;

   scanf("%s", str);
   i = 0;
   j = strlen(str)-1;
   while (i < j) {
      if (str[i] == str[j]){
          i++;
          j--;
          }else{break;}

   }
   if ( i < j )
      printf("Not a palindrome.\n");
   else
      printf("Palindrome!\n");

   return 0;
}
