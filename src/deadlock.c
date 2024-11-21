#include <stdio.h>
#include "deadlock.h"
#include "resources.h"

// Function to check if the system is in a safe state
int isSafe(struct Process processes[], int numProcesses)
{
    int work[3] = {3, 3, 2}; // Example available resources
    int finish[numProcesses];

    for (int i = 0; i < numProcesses; i++)
    {
        finish[i] = 0; // Initialize finish array to 0 (false)
    }

    int safe = 0;
    for (int i = 0; i < numProcesses; i++)
    {
        if (!finish[i])
        {
            int canFinish = 1;
            for (int j = 0; j < 3; j++)
            {
                if (processes[i].need[j] > work[j])
                {
                    canFinish = 0;
                    break;
                }
            }

            if (canFinish)
            {
                for (int j = 0; j < 3; j++)
                {
                    work[j] += processes[i].allocation[j];
                }
                finish[i] = 1;
                safe = 1;
                i = -1; // Restart the loop to check other processes
            }
        }
    }

    // If any process cannot finish, deadlock is detected
    for (int i = 0; i < numProcesses; i++)
    {
        if (!finish[i])
        {
            return 0; // Not safe, deadlock detected
        }
    }

    return 1; // Safe state
}

// Detect deadlock and handle it
void detectDeadlock(struct Process processes[], int numProcesses)
{
    if (!isSafe(processes, numProcesses))
    {
        printf("\nDeadlock detected!\n");
        handleDeadlock(processes, numProcesses);
    }
    else
    {
        printf("\nSystem is in a safe state.\n");
    }
}

// Handle deadlock (terminate a process and recheck)
void handleDeadlock(struct Process processes[], int numProcesses)
{
    // Example strategy: Terminate Process 0 (you can choose a better strategy)
    printf("Handling deadlock by terminating Process 0\n");

    // Free resources (for example, zero out process 0's allocation)
    for (int i = 0; i < 3; i++)
    {
        processes[0].allocation[i] = 0;
    }

    // Recheck system status after recovering from deadlock
    // We should NOT call detectDeadlock recursively here, just return and continue.
    printf("Deadlock resolved, system recovery complete.\n");
    // No need to call detectDeadlock again; let the program continue from here.
}
