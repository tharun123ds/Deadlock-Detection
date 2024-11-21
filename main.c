#include <stdio.h>
#include "resources.h"
#include "deadlock.h"

#define NUM_PROCESSES 5

int main()
{
    struct Process processes[NUM_PROCESSES] = {
        {{0, 0, 0}, {7, 5, 3}, {7, 5, 3}}, // Process 0
        {{0, 0, 0}, {3, 2, 2}, {3, 2, 2}}, // Process 1
        {{0, 0, 0}, {9, 0, 2}, {9, 0, 2}}, // Process 2
        {{0, 0, 0}, {2, 2, 2}, {2, 2, 2}}, // Process 3
        {{0, 0, 0}, {4, 3, 3}, {4, 3, 3}}  // Process 4
    };

    // Initialize the system
    initializeSystem(processes, NUM_PROCESSES);

    // Display the system's state
    displayState(processes, NUM_PROCESSES);

    // Detect and handle deadlock
    detectDeadlock(processes, NUM_PROCESSES);

    return 0;
}
