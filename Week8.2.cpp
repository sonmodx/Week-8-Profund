#include <stdio.h>
#include <string.h>
#include <ctype.h>

void text2morse(char *msg) {
    int i,j;
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *morse[] = {
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--..",
           
    };
    for (i=0;i<strlen(msg);i++)
    {
   for (j=0;j<26;j++)
         {
          if ((char)toupper(msg[i]) == a[j])
          {
            printf("%s",morse[j]);
          }
         }
    }
}
int main() {
    char msg[5000];
    scanf("%s",msg);
    text2morse(msg);
    return 0;
}
