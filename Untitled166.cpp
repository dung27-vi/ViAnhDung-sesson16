#include <stdio.h>
#include <string.h>
#include <sstream>

int main() {
    char str[100];
    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", count);
    return 0 ;
}
