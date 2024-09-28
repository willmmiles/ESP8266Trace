// Event tracking
#include <cstdint>
#include <Print.h>

void clear_events();
void print_events(Print& p);
void setup_isr_tracking();
void track_event(uint32_t lvl, uint32_t data, intptr_t pc = 0, intptr_t sp = 0);
