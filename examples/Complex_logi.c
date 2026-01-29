//This is an early look at the programming language (subject of change)
#include "bios.h"  // API definitions

// entry point for the game
void game_entry(const bios_api_t* api)
{
    api->print("Hello from game!");

    // local variables
    int counter = 0;

    // main loop
    for(int i = 0; i < 5; i++) {
        counter += i;
        api->print("Iteration %d, counter=%d", i, counter);
        api->sleep_ms(500); // BIOS controls the timer
    }

    // simulation of "complex logic"
    int sum = 0;
    int numbers[] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        sum += numbers[i];
        api->print("Adding %d, sum=%d", numbers[i], sum);
        api->sleep_ms(300);
    }

    api->print("Game finished, returning to BIOS");
}
