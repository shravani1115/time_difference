/* START_HH - START HOUR
   START_MM - START MINUTE
   START_SS - START SECOND
   STOP_HH - STOP HOUR
   STOP_MM - STOP MINUTE
   STOP_SS - STOP SECOND
   DIFF_HH - TOTAL DIFFERENCE IN HOURS
   DIFF_MM - TOTAL DIFFERENCE IN MINUTE
   DIFF_SS - TOTAL DIFFERENCE IN SECOND
*/
#include <stdio.h>

int main()
{
    // Initialization:
    int START_HH, START_MM, START_SS;
    int STOP_HH, STOP_MM, STOP_SS;
    
    // Taking input from user:
    printf("Enter the start time (HH:MM:SS): ");
    scanf("%d:%d:%d",&START_HH,&START_MM,&START_SS);

    printf("Enter the End time (HH:MM:SS): ");
    scanf("%d:%d:%d",&STOP_HH,&STOP_MM,&STOP_SS);

    //Calculate the time differnce:

    int hours = STOP_HH - START_HH;
    int minutes = STOP_MM - START_MM;
    int seconds = STOP_SS - START_SS;

    //Handle negative seconds:

    if(seconds < 0)
    {
        seconds += 60;
        minutes -- ;
    }

    //Handle negative minutes :

    if(minutes < 0)
    {
       minutes += 60;
       hours --; 
    }

    // Print the time difference:
    printf("Time difference: %d hours, %d minutes, %d seconds \n " , hours,minutes,seconds);
    
    // calculating the total time  in seconds:
    int DIFF_SS = hours * 3600 + minutes * 60 + seconds ;

    // calculating the total time in minutes:
    int DIFF_MM = DIFF_SS / 60.0;

    //Calculating total time in hours:
    int DIFF_HH = DIFF_MM / 60.0 ;

    //Printing the output:
    printf("DIFF_HH : %d hours\n",DIFF_HH);

    printf("DIFF_MM : %d minutes\n",DIFF_MM);

    printf("DIFF_SS : %d seconds\n",DIFF_SS);

    return 0;


}