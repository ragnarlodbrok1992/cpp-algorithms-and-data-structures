#include <stdio.h>
#include <cstring>

void printNoArgs() {
    // printf("Demo!\n");
    printf("ERROR: No parameters provided. Use --help/-h to get list of features.\n");
    printf("This is a demo app for Algorithms And Data Structures framework.\n");
    printf("  Written by Maciej Oliwa (ragnar).\n");
}

void printHelp() {
    printf("Usage: --help/-h -> Print this help message.\n");
}

int main(int argc, char** argv) {
    if (argc <= 1) {
        printNoArgs();
        return 0;
    } else {
        // Get parameters
        size_t arg = 0;
        while (argv[++arg]) {
            const char* param = argv[arg];
            if (strcmp(param, "--help") == 0 || strcmp(param, "-h") == 0) {
                printHelp();
            }
        }
    }

    return 0;
}
