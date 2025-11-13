#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "bcdac";
    int count[256] = {0};
    int i;
    for (i = 0; i < strlen(str); i++) {
        count[(int)str[i]]++;
    }
    int printed[256] = {0};
    for (i = 0; i < strlen(str); i++) {
        if (printed[(int)str[i]] == 0) {
            printf("%c: %d\n", str[i], count[(int)str[i]]);
            printed[(int)str[i]] = 1;
        }
    }
    return 0;
}
