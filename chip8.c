#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "chip8.h"

void load_game(struct Chip8 *chip, char *rom)
{
    int ret;
    FILE *file = fopen(rom, "rb");
    if (!file) {
        fprintf(stderr, "Failed to open file: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    ret = fread(chip->memory, sizeof(uint8_t), 4096, file);
    if (ret <= 0) {
        fprintf(stderr, "Error in reading: %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
}

