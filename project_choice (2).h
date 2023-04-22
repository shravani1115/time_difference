#ifndef TIME_CALCULATOR_H
#define TIME_CALCULATOR_H

// Function prototypes
void manualTimeInput(int *start_time, int *stop_time);
void systemTimeInput(int *start_time, int *stop_time);
int calculateElapsedTime(int start_time, int stop_time);
void printElapsedTime(int elapsed_time);
void printTotalTime(int total_seconds);

#endif
