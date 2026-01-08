#ifndef TRANSISTOR_H
#define TRANSISTOR_H

#include <stdint.h>

typedef struct Transistor Transistor;
typedef struct CPU CPU;

void init_6502(CPU *cpu);
void simulate_cycle(CPU *cpu);
uint8_t read_node(CPU *cpu, uint16_t node_id);
void write_node(CPU *cpu, uint16_t node_id, uint8_t value);

#endif
