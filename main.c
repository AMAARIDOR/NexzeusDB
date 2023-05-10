#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>

void print_prompt() { printf("db > "); }

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;