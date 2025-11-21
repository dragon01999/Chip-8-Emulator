#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "chip8.h"

struct Chip8 chip;

void load_game(struct Chip8 *chip, char *file)
{
    int ret;
    FILE *file = fopen(file, "r");
    if (!file) {
        fprintf(stderr, "Failed to open file: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    ret = fread(chip.memory, sizeof(uint8_t), 4096, file);
    if (ret != 4096) {
        fprintf(stderr, "Error in reading: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
}



