#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Khai bao va gan gia tri cho mot chuoi bat ky.";
    char ch;
    int count = 0;

    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("So lan xuat hien cua ky tu '%c' trong chuoi la: %d\n", ch, count);

    return 0 ;
}
