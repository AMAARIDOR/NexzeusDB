#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void print_prompt() { printf("db > "); }

void close_input_buffer(InputBuffer* input_buffer) {
    free(input_buffer->buffer);
    free(input_buffer);
}

int main(int argc, char* argv[]) {
    while (true) {
        print_prompt();
        if (strcmp(input_buffer->buffer, ".exit") == 0) {
            close_input_buffer(input_buffer);
            exit(EXIT_SUCCESS);
        } else {
            printf("Unrecognized commmand '%s.\n", input_buffer->buffer);
        }
    }
}