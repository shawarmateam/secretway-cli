#include <stdbool.h>
#include <string.h>
#include "VERSION.h"

void help() {
    printf(VERSION);printf("\n");
    printf("Command Line Interface (CLI) SecretWay Client\n\n");
    printf("GitHub: https://github.com/shawarmateam/secretway-cli\n");

    printf("Usage: secway-cli [OPTION]...\n\n");

    printf("OPTIONS:\n");
    printf("  -h, --help     Print this help message & exit.\n");
    printf("  -v, --version  Print version & exit.\n");
}

void version() {
    printf(VERSION);printf("\n");
}

bool checkStr(char* s0, char* s1) {
    return strcmp(s0, s1) == 0;
}

bool check_params(int argc, char** argv) {
    if (argc <= 1) return false;
    
    char* fst_arg = argv[1];
    if (checkStr(fst_arg, "-h") || checkStr(fst_arg, "--help")) {
        help();
        return true;
    } else if (checkStr(fst_arg, "-v") || checkStr(fst_arg, "--version")) {
        version();
        return true;
    }
    return false;
}
