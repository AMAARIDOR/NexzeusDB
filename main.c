#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>

void print_prompt() { printf("db > "); }

int main(int argc, char* argv[]) {
    while (true) {
        print_prompt();
    }
}