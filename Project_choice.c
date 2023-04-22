#include <stdio.h>
#include <time.h>

// function to convert seconds to hours, minutes, and seconds
void convertSeconds(int seconds, int *hours, int *minutes, int *secs)
{
    *hours = seconds / 3600;
    *minutes = (seconds % 3600) / 60;
    *secs = seconds % 60;
}

int main()
{
    // Initialization:
    int start_time, stop_time, elapsed_time;
    char choice;

    // Taking input from user:
    printf("Press 'm' to manually start/stop the clock or any other key to use system time: ");
    scanf(" %c", &choice);

    if (choice == 'm' || choice == 'M')
    {
        printf("Press any key to start the clock...");
        getchar();
        start_time = time(NULL);
        printf("Clock has started!\n");
        printf("Press any key to stop the clock...");
        getchar();
        stop_time = time(NULL);
        printf("Clock has stopped!\n");
    }
    else
    {
        int START_HH, START_MM, START_SS;
        int STOP_HH, STOP_MM, STOP_SS;
        printf("Enter the start time in HH:MM:SS format: ");
        scanf("%d:%d:%d", &START_HH, &START_MM, &START_SS);
        start_time = (START_HH * 3600) + (START_MM * 60) + START_SS;

        printf("Enter the stop time in HH:MM:SS format: ");
        scanf("%d:%d:%d", &STOP_HH, &STOP_MM, &STOP_SS);
        stop_time = (STOP_HH * 3600) + (STOP_MM * 60) + STOP_SS;
    }

    //Calculate the time difference:
    elapsed_time = stop_time - start_time;
    
    if (elapsed_time < 0)
    {
        elapsed_time += 86400; // add 24 hours (86400 seconds)
    }

    int hours, minutes, seconds;
    convertSeconds(elapsed_time, &hours, &minutes, &seconds);

    // Print the time difference:
    printf("Time difference: %d hours, %d minutes, %d seconds \n", hours, minutes, seconds);

    // calculating the total time in seconds:
    int DIFF_SS = elapsed_time;

    // calculating the total time in minutes:
    int DIFF_MM = DIFF_SS / 60;

    //Calculating total time in hours:
    int DIFF_HH = DIFF_MM / 60;

    //Printing the output:
    printf("DIFF_HH : %d\n", DIFF_HH);
    printf("DIFF_MM : %d\n", DIFF_MM);
    printf("DIFF_SS : %d\n", DIFF_SS);

    return 0;
}
