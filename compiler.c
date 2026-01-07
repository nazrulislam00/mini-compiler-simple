#include <stdio.h>
#include <ctype.h>

int main() {
    char code[100];

    printf("Enter a simple expression: ");
    fgets(code, sizeof(code), stdin);

    for (int i = 0; code[i] != '\0'; i++) {
        if (isdigit(code[i]))
            printf("NUMBER ");
        else if (code[i] == '+' || code[i] == '-' || code[i] == '*' || code[i] == '/')
            printf("OPERATOR ");
    }

    printf("\n");
    return 0;
}
