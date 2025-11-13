#include <stdio.h>

int main() {
    char str[] = "Vi Anh Dung "; 
    printf("Cac ky tu trong chuoi la: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("2705");

    return 0;
}
