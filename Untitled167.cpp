#include <stdio.h>
#include <sstream>
#include <string.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int letters = 0, digits = 0, specials = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (str[i] != ' '){
            specials++;
        }
    }

    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specials);

    return 0;
}
