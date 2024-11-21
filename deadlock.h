#ifndef DEADLOCK_H
#define DEADLOCK_H

#include "resources.h" // Include resources.h to access struct Process

void detectDeadlock(struct Process processes[], int numProcesses);
void handleDeadlock(struct Process processes[], int numProcesses);

#endif // DEADLOCK_H
