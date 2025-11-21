#ifndef CHIP8_H
#define CHIP8_H

#include <stdint.h>

struct Chip8 {
    uint8_t *memory;
    uint16_t stack[2];
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint16_t i;
    uint16_t pc;
    uint8_t v[16];
};

void load_game(struct Chip8 *chip, char *rom);

#endif

