#include <stdio.h>
#include <string.h>
#include <ctype.h>

int indexOf(char *a, char c) {
    int i;
    for (i = 0; i < strlen(a); ++i) {
        if (c == a[i]) {
            return i;
        }
    }
    return -1;
}

void text2morse(char *msg) {
    int i;
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
    for (i = 0; i < strlen(msg); ++i) {
        int pos = indexOf(a, (char) toupper(msg[i]));
        if (pos != -1) {
            printf("%s", morse[pos]);
        }
    }
}
int main() {
    char msg[5000];
    scanf("%s",msg);
    text2morse(msg);
    return 0;
}
