#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    printf("Chuoi vua nhap la: %s\n", str);

    length = strlen(str);

    printf("Do dai chuoi la: %d\n", length);

    return 0;
}
