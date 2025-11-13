#include <stdio.h>
#include <sstream>
#include <string.h>

int main() {
    char str[] = "hello world";
    int i;
    int capitalize_next = 1;
    printf("Input: %s\n", str);

    for (i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            capitalize_next = 1;
        } else if (capitalize_next) {
            str[i] = toupper(str[i]);
            capitalize_next = 0;
        }
    }

    printf("Output: %s\n", str);

    return 0;
}
