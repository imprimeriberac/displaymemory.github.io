#include <stdio.h>
#include <stdint.h>

#define MEMORY_SIZE 256  // Taille de la mémoire à afficher (en octets)

int main() {
    uint8_t *memory = (uint8_t *)0x0;  // Adresse de départ de la mémoire à afficher
    int i;

    // Affichage de la mémoire octet par octet
    for (i = 0; i < MEMORY_SIZE; i++) {
        printf("Adresse : %p, Valeur : %02X\n", (void *)(memory + i), memory[i]);
    }

    return 0;
}
