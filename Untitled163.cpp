#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap mot chuoi bat ki: ");
    scanf("%s", str);
    strrev(str);
    printf("Chuoi dao nguoc la: %s\n", str);
    return 0;
}
