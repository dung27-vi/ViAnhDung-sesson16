#include <stdio.h>
#include <string.h>

void removeChar(char *str, char charToRemove) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != charToRemove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100] = "hello world";
    char charToRemove;

    printf("Chuoi ban dau: %s\n", str);
    printf("Nhap mot ky tu da xoa: ");
    scanf("%c", &charToRemove);

    removeChar(str, charToRemove);
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", charToRemove, str);

    return 0;
}
