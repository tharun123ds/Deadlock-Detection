#include <stdio.h>
#include "resources.h"

// Initialize system (example resources)
void initializeSystem(struct Process processes[], int numProcesses)
{
    for (int i = 0; i < numProcesses; i++)
    {
        // Initialize process allocation and max values (example)
        for (int j = 0; j < 3; j++)
        {
            processes[i].allocation[j] = 0;             // Start with 0 allocation
            processes[i].max[j] = 3;                    // Max resources
            processes[i].need[j] = processes[i].max[j]; // Initially, need = max
        }
    }
}

// Display the state of the system
void displayState(struct Process processes[], int numProcesses)
{
    for (int i = 0; i < numProcesses; i++)
    {
        printf("\nProcess %d\n", i);
        printf("Allocation: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", processes[i].allocation[j]);
        }
        printf("\nMax: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", processes[i].max[j]);
        }
        printf("\nNeed: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", processes[i].need[j]);
        }
        printf("\n");
    }
}
