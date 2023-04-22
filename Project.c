#include <stdio.h>
#include<E:\DSA\Project.h> // upload your path 


//#include "time1.h"

// Variable definition 
int START_HH, START_MM, START_SS;
int STOP_HH, STOP_MM, STOP_SS;
int DIFF_HH, DIFF_MM, DIFF_SS;

// Function definition 
void calculate_time_difference()
{
    int hours, minutes, seconds;

    if (STOP_SS >= START_SS)
    {
        seconds = STOP_SS - START_SS;
    } 
    else 
    {
        seconds = STOP_SS + 60 - START_SS;
        STOP_MM --;
    }

    if (STOP_MM >= START_MM) 
    {
        minutes = STOP_MM - START_MM;
    }
    else
    {
        minutes = STOP_MM + 60 - START_MM;
        STOP_HH--;
    }

    hours = STOP_HH - START_HH;

    if (hours < 0)
    {
        hours += 24;
    }

    // Print the time difference:
    printf("Time difference: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    // calculating the total time  in seconds:
    DIFF_SS = hours * 3600 + minutes * 60 + seconds;

    // calculating the total time in minutes:
    DIFF_MM = DIFF_SS / 60.0;

    //Calculating total time in hours:
    DIFF_HH = DIFF_MM / 60.0;

    //Printing the output:
    printf("DIFF_HH : %d hours\n", DIFF_HH);
    printf("DIFF_MM : %d minutes\n", DIFF_MM);
    printf("DIFF_SS : %d seconds\n", DIFF_SS);
}

int main()
{
    // Taking input from user:
    printf("Enter the start time (HH:MM:SS): ");
    scanf("%d:%d:%d",&START_HH,&START_MM,&START_SS);

    printf("Enter the End time (HH:MM:SS): ");
    scanf("%d:%d:%d",&STOP_HH,&STOP_MM,&STOP_SS);

    calculate_time_difference();

    return 0;
}
