#include <stdio.h>

void printNoArgs() {
    printf("Demo!\n");
}

int main(int argc, char** argv) {
    if (argc <= 1) {
        printNoArgs();
        return 0;
    } else {

    }

    return 0;
}
