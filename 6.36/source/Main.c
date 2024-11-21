#include <stdio.h>

void stringReverse(char* str) {
    if (*str == '\0') {
        return; 
    }
    stringReverse(str + 1); 
    putchar(*str);
}

int main() {
    char input[100]; 

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
        i++;
    }

    printf("Reversed string: ");
    stringReverse(input);
    printf("\n");

    return 0;
}
