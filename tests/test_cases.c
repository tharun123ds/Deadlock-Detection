#include <stdio.h>
#include "resources.h"
#include "deadlock.h"

// Test case 1: No deadlock (Safe state)
void testSafeState()
{
    struct Process processes[5];
    initializeSystem(processes, 5);

    // Assign some resources to create a safe state
    processes[0].allocation[0] = 1;
    processes[1].allocation[1] = 1;
    processes[2].allocation[2] = 1;

    printf("\nTest: Safe State\n");
    displayState(processes, 5);
    detectDeadlock(processes, 5); // Should print "System is in a safe state."
}

// Test case 2: Deadlock (Unsafe state)
void testDeadlock()
{
    struct Process processes[5];
    initializeSystem(processes, 5);

    // Assign resources that will lead to a deadlock
    processes[0].allocation[0] = 1;
    processes[1].allocation[1] = 1;
    processes[2].allocation[2] = 1;

    // Processes need resources that are currently allocated
    processes[0].need[1] = 1;
    processes[1].need[2] = 1;
    processes[2].need[0] = 1;

    printf("\nTest: Deadlock Detection\n");
    displayState(processes, 5);
    detectDeadlock(processes, 5); // Should print "Deadlock detected!"
}

// Test case 3: Deadlock resolution by terminating Process 0
void testDeadlockResolution()
{
    struct Process processes[5];
    initializeSystem(processes, 5);

    // Assign resources that will lead to a deadlock
    processes[0].allocation[0] = 1;
    processes[1].allocation[1] = 1;
    processes[2].allocation[2] = 1;

    // Processes need resources that are currently allocated
    processes[0].need[1] = 1;
    processes[1].need[2] = 1;
    processes[2].need[0] = 1;

    printf("\nTest: Deadlock Resolution\n");
    displayState(processes, 5);
    detectDeadlock(processes, 5); // Should print "Deadlock detected!" and then "Handling deadlock by terminating Process 0"
    displayState(processes, 5);   // Display state after deadlock resolution
}

// Main function to run the test cases
int main()
{
    testSafeState();
    testDeadlock();
    testDeadlockResolution();
    return 0;
}
