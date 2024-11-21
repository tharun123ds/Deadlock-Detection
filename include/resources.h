#ifndef RESOURCES_H
#define RESOURCES_H

// Structure to represent a process
struct Process
{
    int allocation[3]; // Resources allocated to the process
    int max[3];        // Maximum resources the process can request
    int need[3];       // Resources the process still needs
};

// Function declarations
void initializeSystem(struct Process processes[], int numProcesses);
void displayState(struct Process processes[], int numProcesses);

#endif // RESOURCES_H
