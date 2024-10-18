#include <stdio.h>
#include <string.h>
#include "param.c"
#include <stdbool.h>

#define MAX_INPUT 100

int program() {
    char input[MAX_INPUT];

    printf("Welcome to my CLI application!\n");
    printf("Type 'exit' to quit.\n");

    while (1) {
        printf("> ");
        fgets(input, MAX_INPUT, stdin);

        // Удаление символа новой строки
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "exit") == 0) {
            break;
        }

        printf("You entered: %s\n", input);
    }

    printf("Goodbye!\n");
    return 0;
}

int main(int argc, char** argv) {
    if (!check_params(argc, argv)) program();
}

