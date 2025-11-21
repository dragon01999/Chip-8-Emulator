#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdlib.h>
#include "chip8.h"

int main(int argc, char **argv) {
    struct Chip8 chip;
    chip.memory = malloc(sizeof(char) * 4096);
    char *rom = argv[1];
    puts(argv[1]);
    puts(rom);
    load_game(&chip, rom);
    for (int i = 0; i < 4096; i++) 
        printf("%x", chip.memory[i]);
    return 0;
}
    
